/*
 *   File: ch04_proj02.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-02
 *  Brief: Chapter 4 Project 2 - 3-digit Reversed
 */

#include <stdio.h>

int main(void)
{
    int num, dig1_2, dig1, dig2, dig3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    dig1_2 = num / 10;
    dig1 = dig1_2 / 10;
    dig2 = dig1_2 % 10;
    dig3 = num % 10;

    printf("The reversal is: %d%d%d\n", dig3, dig2, dig1);

    return 0;
}

