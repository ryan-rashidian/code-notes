/* 
 *   File: ch06_proj03.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 3 - Simplify Fraction
 */

#include <stdio.h>

int main(void)
{
    int num, denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    // Euclid's algorithm
    int n = num, m = denom;
    while (1) {
        if (n == 0) {
            int gcd = m;
            num = num / gcd;
            denom = denom / gcd;
            printf("In lowest terms: %d/%d\n", num, denom);
            return 0;
        }

        int rem = m % n;
        m = n;
        n = rem;
    }
}

