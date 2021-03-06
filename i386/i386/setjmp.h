/* 
 * Mach Operating System
 * Copyright (c) 1991,1990 Carnegie Mellon University
 * All Rights Reserved.
 * 
 * Permission to use, copy, modify and distribute this software and its
 * documentation is hereby granted, provided that both the copyright
 * notice and this permission notice appear in all copies of the
 * software, derivative works or modified versions, and any portions
 * thereof, and that both notices appear in supporting documentation.
 * 
 * CARNEGIE MELLON ALLOWS FREE USE OF THIS SOFTWARE IN ITS "AS IS"
 * CONDITION.  CARNEGIE MELLON DISCLAIMS ANY LIABILITY OF ANY KIND FOR
 * ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.
 * 
 * Carnegie Mellon requests users of this software to return to
 * 
 *  Software Distribution Coordinator  or  Software.Distribution@CS.CMU.EDU
 *  School of Computer Science
 *  Carnegie Mellon University
 *  Pittsburgh PA 15213-3890
 * 
 * any improvements or extensions that they make and grant Carnegie Mellon
 * the rights to redistribute these changes.
 */
/*
 * Setjmp/longjmp buffer for i386.
 */
#ifndef	_I386_SETJMP_H_
#define	_I386_SETJMP_H_

typedef	struct jmp_buf {
#ifdef __i386__
	int	jmp_buf[6];	/* ebx, esi, edi, ebp, esp, eip */
#else
	long	jmp_buf[8];	/* rbx, rbp, r12, r13, r14, r15, rsp, rip */
#endif
} jmp_buf_t;

extern int _setjmp(jmp_buf_t*);

extern void _longjmp(jmp_buf_t*, int) __attribute__ ((noreturn));

#endif	/* _I386_SETJMP_H_ */
