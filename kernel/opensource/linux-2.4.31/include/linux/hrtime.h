#ifndef _HRTIME_H
#define _HRTIME_H

/*
 * include/linux/hrtime.h
 *
 *
 * 2003-7-7  Posix Clocks & timers 
 *                           by George Anzinger george@mvista.com
 *
 *			     Copyright (C) 2003 by MontaVista Software.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * MontaVista Software | 1237 East Arques Avenue | Sunnyvale | CA 94085 | USA 
 */
#include <linux/config.h>
#include <linux/types.h>

/*
 * ALWAYS inclued this file and never the asm/hrtime.h
 *
 * This file is the glue to bring in the platform stuff.
 * We make it all depend on the CONFIG option so all archs
 * will work as long as the CONFIG is not set.  Once an 
 * arch defines the CONFIG, it had better have the 
 * asm/hrtime.h file in place.
 */

/*
 * Function to call when ever the clock is set
 */
extern void clock_was_set(void);

#ifdef CONFIG_HIGH_RES_TIMERS

#define IF_HIGH_RES(a) a


/*
 * callback routine when hr time interrupt happens.
 * On a high-res-timer interrupt the interrupt routine should call
 * do_hr_timer_int()
 */
/* extern void do_hr_timer_int(void); */

#define do_hr_timer_int() mark_bh(TIMER_BH)

#include <asm/hrtime.h>

/* asm/hrtime must provide the following functions/variables/macros.
 *
 * Note that declaration here is for illustration purpose only. Arches
 * are free to implement them either as macros or as functions/variables.
 * 
 * int schedule_hr_timer_int(unsigned long ref_jiffies, int hr_clock_cycles);
 *
 * 	Schedule next hr clock interrupt at the time specified by
 * 	ref_jiffies and hr_clock_cycles.
 *
 * 	Return non-zero if the specified time is already passed.
 *
 * 	If a previously scheduled interrupt has not happened yet, it is
 * 	discarded and replaced by the new one.  (In practice, this will
 * 	happen when a new timer is entered prior to the one last asked
 * 	for.)
 *
 * 	Arch can assume that 
 * 		0 <= hr_clock_cycles <= arch_cycles_per_jiffy
 * 		-10 <= (jiffies - ref_jiffies) <= 10 jiffies
 *
 *      Locking: This function is called under the spin_lock_irq for the
 *      timer list, thus interrupts are off.
 *
 *
 * int get_arch_cycles(unsigned long ref_jiffies);
 *
 * 	return time elapsed from the reference jiffies to present in the
 * 	units of hr_clock_cycles.
 *
 * 	Arch code can assume 
 * 		0 <= (jiffies - ref_jiffies) <= 10 jiffies
 *              ref_jiffies may not increase monotonically.
 *
 *      Locking: The caller will provide locking equivalent to read_lock
 *      on the xtime_lock.  The callee need only lock hardware if needed.
 *
 * extern int arch_cycle_to_nsec(long hr_clock_cycles);   
 * extern int nsec_to_arch_cycle(long nsec); 
 *
 * 	Conversion back and forth between hr_clock_cycles and
 * 	nanoseconds.  hr_clock_cycles may be negative.
 *
 *
 * extern int arch_cycles_per_jiffy;
 *
 * 	How many  hr_clock_cycles in a jiffy.
 * 
 * 	NOTE:
 * 		if arch defines this as a macro to an unsigned integer,
 * 		don't forget to add (long) modifier, i.e.,
 *
 * 		#define	arch_cycles_per_jiffy ((long)arch_private_unsigned_int)
 *
 * These values/ functions must be available to modules for use in setting 
 * up hr timers:
 *
 * arch_cycles_per_jiffy
 * arch_cycle_to_nsec(long hr_clock_cycles)
 * nsec_to_arch_cycle(long nsec)
 * 
 * If they are macros or inline functions that use variables to do the
 * conversions, the variables must be EXPORTED.  If they are simple
 * functions, the functions must be EXPORTED.
 *
 * extern int hr_time_resolution;
 *
 * 	Resolution of the timer in nanoseconds.  This should be a value
 * 	the makes sense on the given arch taking into account interrupt
 * 	latency and so forth.  This value is used to define the
 * 	granularity of the timer requests and it is the resolution the
 * 	standard talks about.  It is used to define the resolution of
 * 	CLOCK_REALTIME_HR and CLOCK_MONOTONIC_HR.
 *
 * Global locking issues: 
 *
 *      Time is locked with the xtime_lock using read/write locks.
 *      Note: It is assumed that the do_timer() call is  protected by
 *      write_lock(&xtime_lock).
 *
 *      Using code must not change, but only read, the protected
 *      variables (xtime, jiffies, any temps tha need protection in the
 *      arch_get_cycles() code).  Usage is as follows:
 *
 *      read_lock_irq(&xtime_lock);
 *          do the reads
 *      read_unlock_irq(&xtime);
 *
 *      If you KNOW irq is already off, you can leave off the "_irq".
 *
 *
 * Optional for those archs that need it:
 *
 * int schedule_jiffies_int((unsigned long ref_jiffies)
 *
 *      This function is called when ever the run_timer_list code has
 *      caught up to the current time and determines that the next
 *      interrupt should be for the next jiffy.  The code will never
 *      call both schedule_hr_timer_int() and schedule_jiffies_int() in
 *      the same pass.  It should return true (!0) if ref_jiffies + 1 is
 *      in the past.
 *
 * 	Arch code can assume 
 * 		-10 <= (jiffies - ref_jiffies) <= 10 jiffies
 *
 *      Archs that don't need this function should #define it as:
 *      #define schedule_jiffies_int(jiffies_f) \
 *                   (get_arch_cycles(jiffies_f) >= arch_cycles_per_jiffy)
 *
 *
 * void final_clock_init()
 *
 *      The posix-timers init code checks for existance of this macro
 *      and calls it after the final initialization of the timers
 *      package.  Archs that need to do late initialization "stuff"
 *      should define this macro to do that "stuff".  It is called in an
 *      "__init" function so any inline code it produces will be
 *      released at the end of boot.
 *
 *      Archs that need this function MUST define it as a macro in
 *      asm/hrtimer.h for that arch.  Those that don't need do nothing.

 *  Timer discipline:

 *      Some archs have timers (interrupt generation hardware) that is
 *      not synced to the clock (an example is the x86, PIT (timer) and
 *      TSC (clock)).  For these archs the timer must be disciplined.
 *      By disciplined, we mean that the 1/HZ interrupt should occur in
 *      the interval (0 < interrupt < a few) units of the correct value
 *      as returned by the clock.  For high res timers to work correctly
 *      it is important that these two not be allowed to drift.  For an
 *      example of how to do this, please look at the discipline_timer()
 *      and the final_clock_init() functions in asm-i386/hrtime.h
 */

/*
 * The set of statments "s" is to be protected by the xtime_seq lock
 * Usage:
 * do_atomic_on_xtime_seq( jiff = jiffies;
 *                         cycles = quick_get_cpuctr());
 */
#define do_atomic_on_xtime_seq(s) 			\
	read_lock_irq(&xtime_lock);			\
	s;						\
	read_unlock_irq(&xtime_lock);
 
#else   /*  CONFIG_HIGH_RES_TIMERS */

#define IF_HIGH_RES(a)
#define nsec_to_arch_cycles(a) 0
#define schedule_jiffies_int(a) 0

#endif   /*  CONFIG_HIGH_RES_TIMERS */

/*
 * Here is an SMP helping macro...
 */
#ifdef CONFIG_SMP
#define IF_SMP(a) a
#else
#define IF_SMP(a)
#endif

#endif				/* _HRTIME_H  */
