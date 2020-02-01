/*
 * Write a function int_shifts_are_arithmetic() that yields 1 when run on a machine that uses arithmetic
 * right shifts for data type int and yields 0 otherwise. Your code should work on a machine with any word size. T
 * est your code on several machines.
 */

#include <stdio.h>
#include <stdlib.h>


int int_shifts_are_arithmetic(){

    int a = 1;

    return (a >> 1 ) & 1;
}

int  main(){

    printf("%d", int_shifts_are_arithmetic());

    return 0;

}


