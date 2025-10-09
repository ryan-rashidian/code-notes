/* 
 *   File: ch7_proj_15.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-08
 *  Brief: Chapter 7 Project 15 - Factorial
 */

#include <stdio.h>


int main()
{
    int base_n, factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &base_n);

    factorial = base_n;
    int n = base_n - 1;
    while (n > 0) {
        factorial *= n;
        n--;
    }

    printf("Factorial of %d: %d\n", base_n, factorial);

    return 0;
}

