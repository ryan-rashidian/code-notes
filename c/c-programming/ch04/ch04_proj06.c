/*
 *   File: ch04_proj06.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-02
 *  Brief: Chapter 4 Project 6 - European Article Number
 */

#include <stdio.h>

int main(void)
{
    int d, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    int first_sum, second_sum, total;

    printf("Enter the first 12 digits of EAN: ");
    scanf(
        "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &d, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12
    );

    first_sum = d2 + d4 + d6 + d8 + d10 + d12;
    second_sum = d + d3 + d5 + d7 + d9 + d11;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
