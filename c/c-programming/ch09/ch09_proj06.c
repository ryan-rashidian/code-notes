/* 
 *   File: ch09_proj06.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-19
 *  Brief: Chapter 9 Project 6 - Compute polynomial
 */

#include <stdio.h>

int compute_polynomial(int);


int main(void)
{
    int x;

    printf("Enter integer value for x: ");
    scanf("%d", &x);

    int result = compute_polynomial(x);

    printf("The result is: %d\n", result);

    return 0;
}


int compute_polynomial(int x)
{
    int result = 3 * (x * x * x * x * x);
    result    += 2 * (x * x * x * x);
    result    -= 5 * (x * x * x);
    result    -= x * x;
    result    += 7 * x;
    result    -= 6;

    return result;
}

