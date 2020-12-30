/*
Author: Jiri Kalina
Purpose: Udemy - C Programming For Beginners, 40. Bitwise operators
Title: 40_bitwise_operators.c
Date: 28.12.2020-08:27:02
*/

#include <stdio.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    
    int result = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;
    int shift = 0;
    int shift2 = 0;

    result = a & b;      // 0000 1100   // bitwise AND
    result2 = a | b;     // 0011 1101   // bitwise OR
    result3 = a ^ b;     // 0011 0001   // bitwise EXCLUSIVE OR -> XOR
    result4 = ~a;       

    shift = a << 2;       // 0000 0000 0000 0000 0000 0000 0011 1100
                          // 0000 0000 0000 0000 0000 0000 1111 0000
                          
    shift2 = a >> 2;      // 0000 0000 0000 0000 0000 0000 0011 1100
                          // 0000 0000 0000 0000 0000 0000 0000 1111
    
    printf("result is %d\n", result);
    printf("result2 is %d\n", result2);
    printf("result3 is %d\n", result3);
    printf("result4 is %d\n", result4);

    printf("shift is %d\n", shift);
    printf("shift2 is %d\n", shift2);

    return 0;
}