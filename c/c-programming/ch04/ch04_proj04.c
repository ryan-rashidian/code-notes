/*
 *   File: ch04_proj04.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-02
 *  Brief: Chapter 4 Project 4 - Integer to Octal
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    int d1 = num % 8;
    num /= 8;
    int d2 = num % 8;
    num /= 8;
    int d3 = num % 8;
    num /= 8;
    int d4 = num % 8;
    num /= 8;
    int d5 = num % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", d5, d4, d3, d2, d1);

    return 0;
}
