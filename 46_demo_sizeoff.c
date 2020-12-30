/*
Author: Jiri Kalina
Purpose: Udemy - C Programming For Beginners, 46. Demo sizeoff
Title: 46_demo_sizeoff.c
Date: 28.12.2020-09:56:31
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Var of type char ocuppy: %zd byte\n", sizeof(char));
    printf("Var of type short ocuppy: %zd byte\n", sizeof(short));
    printf("Var of type int ocuppy: %zd byte\n", sizeof(int));    
    printf("Var of type float ocuppy: %zd byte\n", sizeof(float));
    printf("Var of type double ocuppy: %zd byte\n", sizeof(double));
    printf("Var of type long ocuppy: %zd byte\n", sizeof(long));
    printf("Var of type long double ocuppy: %zd byte\n", sizeof(long double));
    
    return 0;
}