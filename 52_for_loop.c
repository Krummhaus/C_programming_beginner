/*
Author: Jiri Kalina
Purpose: Udemy - C Programming For Beginners, 52. For loop
Title: 52_for_loop.c
Date: 30.12.2020-09:32:18
*/

#include <stdio.h>

int main()
{
    unsigned long long sum = 0LL; // stores sum of integers
    unsigned int count = 0; // The number of int to be summed

    // Read the number of integers to be summed
    printf("\nEnter the num of int you want to sum: ");
    scanf("%u", &count);

    // Sum integers from 1 to count
    unsigned int i;
    for (i= 1; i <= count; i++)
    {
        printf("Number of loop: %u ",i);
        sum += i;
        printf(" with current sum: %llu\n", sum);
    }

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);
       
    return 0;
}