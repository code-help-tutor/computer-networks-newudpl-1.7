WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef _AKIRA_MATH_H_
#define _AKIRA_MATH_H_
/***************************************************************************
 *  Math library
 *  akiramath.h
 *
 *  by Akira Tsukamoto
 ***************************************************************************/

/***************************************************************************
 * These codes are from
 * 'Numerical Recipes in C'
 *  The Press Syndicate of the University of Cambridge, 1992.
 ***************************************************************************/

#include "sysdep.h"

#ifdef  __cplusplus
extern "C" {
#endif

/** random function.
 * returns uniform distributed random number 0.0 - 1.0 (float)
 * but it is slower then ANSI rand() function.
 * From
 * 'Numerical Recipes in C'
 *  The Press Syndicate of the University of Cambridge, 1992. */
float ran1(long *idum);

/** binomial random function.
 * returns random number according to binomial-distribution.
 * From
 * 'Numerical Recipes in C'
 *  The Press Syndicate of the University of Cambridge, 1992. */
int bnldev(float pp, int n, long *idum);


/** Gilbert random function.
 * returns 1 for packet loss, according to Gilbert random */
int gilbRand(float pc, float pa);

#ifdef  __cplusplus
}
#endif

#endif                          /* _AKIRA_MATH_H_ */
