/*
Author: Jiri Kalina
Purpose: Udemy - C Programming For Beginners, 36. Challenge
Title: 36_challenge_enum.c
Date: 28.12.2020-07:52:11
*/

#include <stdio.h>

int main()
{
    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft,};

    enum company comp1, comp2, comp3;

    comp1 = Xerox;
    comp2 = Google;
    comp3 = Ebay;

    printf("%d\n", comp1);
    printf("%d\n", comp2);
    printf("%d\n", comp3);

    return 0;
}