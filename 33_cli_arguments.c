/*
Author: Jiri Kalina
Purpose: Udemy, Learn C, 33. Comand line arguments
Title: cli_arguments.c
Date: 27.12.2020-14:50:10
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int numOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    
    printf("Number of Arguments: %d\n", numOfArguments);
    printf("Argument1 is the program name: %s\n", argument1);
    printf("Argument2 is the cmd. line argument: %s\n", argument2);

    return 0;
}