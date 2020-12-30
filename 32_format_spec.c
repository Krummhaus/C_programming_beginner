/*
Author: Jiri Kalina
Purpose: Udemy, Learn C, 32. Format specifiers
Title: format_spec.c
Date: 27.12.2020-14:25:20
*/

#include <stdio.h>

int main()
{
    int     intVar = 101;
    float   floatVar = 455.09877;
    float   x = 4.3407999840770;
    double  doubleVar = 4.71e+12;
    char    charVar = 'E';
    _Bool   boolVar = 0;

    printf("intVar = %i\n", intVar);
    printf("floatVar = %f\n",floatVar);
    printf("doubleVar = %e\n",doubleVar);
    printf("doubleVar = %g\n",doubleVar);
    printf("charVar = %c\n",charVar);
    printf("boolVar = %i\n\n",boolVar);

    printf("x = %f\n",x);
    printf("x = %.2f\n",x);
    printf("x = %e\n",x);

    return 0;
}

/*
Output:
spec; ./format_spec
intVar = 101
floatVar 455.098755
doubleVar 4.710000e+12
doubleVar 4.71e+12
charVar E
boolVar 0
*/