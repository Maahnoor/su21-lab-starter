#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    unsigned bit;
    bit= (x>>n)&1;
    return bit; 
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    *x = (*x & (~(1 << n))) | (v << n);
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    *x ^= 1<<n;
}

