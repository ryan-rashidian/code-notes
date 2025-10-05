/* 
 *   File: ch6_proj_02.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 2 - Greatest Common Divisor
 */

#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    // Euclid's algorithm
    while (1) {
        if (n == 0) {
            printf("Greatest common divisor: %d\n", m);
            return 0;
        }

        int rem = m % n;
        m = n;
        n = rem;
    }
}

