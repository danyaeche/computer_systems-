#include <stdio.h>
/*
 * Fill in code for the following C functions. Function srl performs a logical right shift using an arithmetic right shift (given by value xsra),
 * followed by other oper- ations not including right shifts or division. Function sra performs an arithmetic right shift using a logical right shift
 * (given by value xsrl), followed by other operations not including right shifts or division.You may use the computation 8*sizeof(int) to determine w,
 * the number of bits in data type int.The shift amount k can range from 0 to w − 1.
 */



unsigned srl(unsigned x, int k)
{
    /* Perform shift arithmetically */
    0000 0100 -->
    0000 0110 -->
    0000 0010 ==
    1111 1111
    1111 111
    --. 010

    unsigned xsra = (int) x >> k;
    unsigned  a =    ^ xsra;





}
int sra(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
