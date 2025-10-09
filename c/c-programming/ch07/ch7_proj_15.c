/* 
 *   File: ch7_proj_15.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-08
 *  Brief: Chapter 7 Project 15 - Factorial
 */

#include <stdio.h>


int main(void)
{
    int base_n, factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &base_n);

    factorial = base_n;
    for (int n = base_n - 1; n > 0; n--) {
        factorial *= n;
    }

    printf("Factorial of %d: %d\n", base_n, factorial);

    return 0;
}

