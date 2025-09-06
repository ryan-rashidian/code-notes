/* 
 *   File: ch6_proj_11.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 11 - Constant e
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int factorial = 1;
    float e_approx = 1.0f;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e_approx += 1.0f / factorial;
    }

    printf("Approximation of e: %.6f\n", e_approx);

    return 0;
}

