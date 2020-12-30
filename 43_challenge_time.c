/*
Author: Jiri Kalina
Purpose: Udemy - C Programming For Beginners,
         43. Challenge - convert minutes to years and days
Title: 43_challenge_time.c
Date: 28.12.2020-09:28:51
*/

#include <stdio.h>

int main()
{
    int min = 0;
    double years = 0.0;
    double days = 0.0;
    double minInYear = 0.0;

    printf("Enter number of minutes:\n");
    scanf("%d", &min);

    minInYear = (60 * 24 * 365);

    years = (min / minInYear);
    days = (min / 60.0 / 24.0);

    printf("%d minutes is eaqual to %.2f years or %.2f days.\n", min, years, days);

    return 0;
}