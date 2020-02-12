/*
 * Generate mask indicating leftmost 1 in x.  Assume w=32.
 * For example, 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
 * If x = 0, then return 0.
 */

//use bit-smearing

#include <stdio.h>

int leftmost_one(unsigned x)
{
    x |= x >> 16;
    x |= x >> 8;
    x |= x >> 4;
    x |= x >> 2;
    x |= x > 1;

    x ^= x >> 1;

    return x;
}

int main()
{
    unsigned x = 0xFF00;
    unsigned y = 0x6600;

    printf("%x/n %x/n", leftmost_one(x), leftmost_one(y));

    return 0;
}