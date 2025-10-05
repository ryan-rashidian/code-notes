/* 
 *   File: ch6_proj_12.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 12 - Modify ch6_proj_12.c
 */

#include <stdio.h>

int main(void)
{
    int n;
    float epsilon;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter a small threshold: ");
    scanf("%f", &epsilon);

    int factorial = 1;
    float e_approx = 1.0f;

    for (int i = 1; 1.0f / factorial >= epsilon; i++) {
        factorial *= i;
        e_approx += 1.0f / factorial;
    }

    printf("Approximation of e: %.6f\n", e_approx);

    return 0;
}

