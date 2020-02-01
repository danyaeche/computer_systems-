/*
 * Suppose we number the bytes in a w-bit word from 0 (least significant) to w/8 − 1 (most significant). Write code for the following C function, which will return an unsigned value in which byte i of argument x has been replaced by byte b:
 *  unsigned replace_byte (unsigned x, int i, unsigned char b);
 *  Here are some examples showing how the function should work:
 *  replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678
 *  replace_byte(0x12345678, 0, 0xAB) --> 0x123456AB
 */

#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b){

    unsigned y = x >> (i * 8); /* 0x1234 */
    //printf("%x \n", y);
    unsigned w = (x << (i * 8)) >> (i * 8);     /* 0xFFFF */
    //printf("%x \n", w);
    unsigned z = (y & ~0xFF);
    //printf("%x \n", z);
    unsigned a = (z | (unsigned)b);
    //printf("%x \n", a);
    unsigned c = a << (i * 8 );
    //printf("%x \n", c);
    unsigned val = (c | w);
    //printf("%x \n", val);

    return val;
}

int main(int argc, char *argv[]){

    unsigned zodd = replace_byte(unsigned argv[1], int argv[2], unsigned char argv[3]);

    printf("%x", zodd)


    return 0;
}

