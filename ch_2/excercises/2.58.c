/*
 * Write a procedure is_little_endian that will return 1 when compiled and run on a little-endian machine, and will return 0
 * when compiled and run on a big- endian machine. This program should run on any machine, regardless of its word size.
 */


#include <stdio.h>

int is_little_endian(void){
    int x = 0;

    /* MSB = 0, LSB = 1
     * if Little Endian: MSB = 1, LSB = 0
     */

    return x | 1;

};


main(){

    if (is_little_endian() == 0) {
        printf("This machine is big endian");
    } else {
        printf("This machine is little endian");
    }

    return 0;
}

