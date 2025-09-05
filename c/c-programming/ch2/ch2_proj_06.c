/*
 *   File: ch2_proj_06.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 2 Project 6 - Polynomial Formula Input Horner's Rule
 */

#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Enter value for x: ");
    scanf("%d", &x);

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Result: %d\n", result);

    return 0;
}

