/*
Author: Jiri Kalina
Purpose: Learning C - Udemy J. Fedin - 28. Read intput and output
Date: 26. prosinec 2020
*/

#include <stdio.h>

int main(){
    char str [100]; // char array lenght 100
    int i; // declares variable "i" integer

    printf("Enter a value:");
    scanf("%s %d", str, &i);
    
    printf("\nYou entered: %s %d", str, i);

    return 0;
}