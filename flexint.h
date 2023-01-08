#ifndef FLEXINT_H
#define FLEXINT_H

/* variable-size 2's complement integer */
/* Invariant: 2 <= width <= 64 */
typedef struct intpair {
  unsigned long val;
  unsigned char width;
} flexint;

/*
 * Compare two 2's-complement integers with possibly different numbers
 * of significant  bits.
 * Precondition: 1 < a->width < 65, 1 < b->width < 65
 * Returns:
 * -1 if the value represented by *a < the value represented *b
 *  0 if the value represented by *a = the value represented *b
 *  1 if the value represented by *a > the value represented *b
 */
int flexcmp(flexint *xp, flexint *yp);
#endif
