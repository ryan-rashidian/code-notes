/*
 *   File: ch4_proj_03.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-02
 *  Brief: Chapter 4 Project 3 - 3-digit Reversed with Formatting
 */

#include <stdio.h>

int main(void)
{
    int dig1, dig2, dig3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &dig1, &dig2, &dig3);

    printf("The reversal is: %d%d%d\n", dig3, dig2, dig1);

    return 0;
}

