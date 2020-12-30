/*
Author: Jiri Kalina
Purpose: Udemy - C Programming For Beginners, 49.switch
Title: 49_swithc_statm.c
Date: 29.12.2020-12:00:14
*/

#include <stdio.h>

int main()
{
    enum weekday {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
    enum weekday today = Wed;

    switch(today)
    {
        case Sun:
            printf("Today is Sunday.\n");
            break;
        case Mon:
            printf("Today is Monday.\n");
            break;
        case Tue:
            printf("Today is Tuesday.\n");
            break;
        default:
            printf("Whatever.\n");
            break;
    }
    
    return 0;
}