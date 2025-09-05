/*
 *   File: ch4_proj_01.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-02
 *  Brief: Chapter 4 Project 1 - 2-digit Reversed
 */

#include <stdio.h>

int main(void)
{
    int num, dig1, dig2;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    
    dig1 = num / 10;
    dig2 = num % 10;

    printf("The reversal is: %d%d\n", dig2, dig1);

    return 0;
}

