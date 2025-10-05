/* 
 *   File: ch7_proj_03.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-07
 *  Brief: Chapter 7 Project 3 - Modify sum2.c
 */

#include <stdio.h>

int main(void)
{
    long double n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%Lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%Lf", &n);
    }

    printf("The sum is: %Lf\n", sum);

    return 0;
}

