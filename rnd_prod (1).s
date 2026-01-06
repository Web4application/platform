/************************************************************************/
/*									*/
/* The author of this software is David M. Gay.				*/
/*									*/
/* Copyright (c) 1991 by Lucent Technologies.				*/
/*									*/
/* Permission to use, copy, modify, and distribute this software for	*/
/* any purpose without fee is hereby granted, provided that this entire	*/
/* notice is included in all copies of any software which is or		*/
/* includes a copy or modification of this software and in all copies	*/
/* of the supporting documentation for such software.			*/
/*									*/
/* THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR	*/
/* IMPLIED WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR LUCENT	*/
/* MAKES ANY REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE	*/
/* MERCHANTABILITY OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR	*/
/* PURPOSE.								*/
/*									*/
/************************************************************************/

.text
	entry rnd_prod
rnd_prod:
	using	rnd_prod,15
	ld	0,0+64(13)
	mxd	0,8+64(13)
	lrdr	0,0
	b	2(,14)
	drop
	entry	rnd_quot
rnd_quot:
	using	rnd_quot,15
	ld	0,0+64(13)
	ldr	2,0
	ld	4,8+64(13)
	ddr	2,4
	std	2,32(13)
	mxdr	4,2
	sdr	2,2
	sxr	0,4
	dd	0,8+64(13)
	sdr	2,2
	ld	4,32(13)
	sdr	6,6
	axr	0,4
	lrdr	0,0
	b	2(,14)
