/* 
 *   File: ch9_proj_07.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-20
 *  Brief: Chapter 9 Project 7 - Refactor power function
 */

#include <stdio.h>

int power(int, int);


int main(void)
{
    int x, n;

    printf("Enter x value: ");
    scanf("%d", &x);

    printf("Enter n value: ");
    scanf("%d", &n);

    int result = power(x, n);

    printf("Result: %d\n", result);

    return 0;
}


int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else
        return power(x, n - 1) * x;
}

