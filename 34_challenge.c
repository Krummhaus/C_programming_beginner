/*
Author: Jiri Kalina
Purpose: Udemy - C Programming For Beginners, 34. Area of rectangle
Title: 34_challenge.c
Date: 27.12.2020-15:18:04
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double w = atof(argv[1]);
    double h = atof(argv[2]);
    double p = 0.0;
    double a = 0.0;
    
    p = 2*(w + h);
    a = w * h;

    printf("Perimeter of a rectangle is %.2f\n", p);
    printf("Area of a rectangle is %.2f\n", a);
    
    return 0;
}
