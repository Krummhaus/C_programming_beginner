/*
Author: Jiri Kalina
Purpose: Learning C - Udemy J. Fedin - 30. Basic data types
Date: 27. prosinec 2020


int numero = 47 // stores integers, not decimal, +/-
    int rgbColor = 0xFFEF0D;
float // numbers with decimal places
double // better precision than float, usually 64 bits
_Bool
char -> single character 'a', '6', ','  -> '' singlequotes means character
                                        -> "" doublequotes means string !!!
*/

#include <stdio.h>

int main()
{
    float num = 23.333;
    double num2 = 45.5647674744446456;

    _Bool boovar = 1;
    // C99 standard -> new Boolean -> #include <stdbool.h>
    // bool myBoolean = true;
    printf("%f\n\a", num);
    return 0;
}