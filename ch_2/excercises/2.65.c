/*
 *Return 1 when x contains an odd number of 1s; 0 otherwise.Assume w=32
 */


#include <stdio.h>

int odd_ones(unsigned x)
{
    x = ( x >> 16 ) ^ ( x & 0x0000FFFF);
    x = ( x >> 8 )  ^ ( x & 0x00FF);
    x = ( x >> 4 )  ^ ( x & 0x0F);
    x = ( x >> 2)   ^ ( x & 0x03);
    x = ( x >> 1)   ^ ( x & 0x01);

    return x;
}

int main()
{
    int x = 0xaf9509ab;

    printf("%d", odd_ones(x));

    return 0;
}