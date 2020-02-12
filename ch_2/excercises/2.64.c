//Return 1 when any odd bit of x equals 1; 0 otherwise.Assume w=32

#include<stdio.h>

int any_odd_one(unsigned x)
{
    return !!(x & 0xAAAAAAAA);
}

int main()
{
    unsigned x = 939432390;

    printf("%d", any_odd_one(x));

    return 0;
}