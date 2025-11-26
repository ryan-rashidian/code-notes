/* 
 *   File: ch11_proj03.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-25
 *  Brief: Chapter 11 Project 3 - Modify ch06_proj03.c
 */

#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);


int main(void)
{
    int numerator, denominator;
    int reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    // Euclid's algorithm
    int n = numerator, m = denominator;
    for (;;) {
        int rem = m % n;
        m = n;
        n = rem;

        if (n == 0) {
            int gcd = m;
            *reduced_numerator = numerator / gcd;
            *reduced_denominator = denominator / gcd;
            break;
        }
    }
}

