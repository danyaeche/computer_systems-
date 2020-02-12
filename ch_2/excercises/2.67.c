#include <stdio.h>

/*
 * You are given the task of writing a procedure int_size_is_32() that yields 1 when run on a machine for which an int is 32 bits,
 * and yields 0 otherwise. You are not allowed to use the sizeof operator. Here is a first attempt:
 */


//A. In what way does our code fail to comply with the C standard?
//B. Modify the code to run properly on any machine for which data type int is at least 32 bits.
//C. Modify the code to run properly on any machine for which data type int is at least 16 bits.


//A.

/*
 * The C standard(C99) states that integer promotions. If the value of the right operand
 * is negative or greater than one then qual to the width of that data type(in this case 32)
 * than the beahvior is undefined.
 */

//B

int int_size_is_32()
{
    int set_msb = 1 << 31;
    int beyond_msb = set_msb < 1;

    return set_msb && !beyond_msb;
}

//c

int int_size_is_16()
{
    int set_msb = 1 << 15;
    int beyond_msb = set_msb << 1;

    return set_msb && !beyond_msb;
}

int main()
{
    printf("This machine ");
    if (int_size_is_16()){
        printf("has 16-bit intergers\n");
    } else {
        if (int_size_is_32()) {
            printf("has 32-bit intergers\n");
        }
        else {
            printf("has at least 64-bit intergers");
        }
    }

    return 0;
}

