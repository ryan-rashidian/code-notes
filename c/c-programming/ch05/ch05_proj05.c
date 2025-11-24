/* 
 *   File: ch05_proj05.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 5 - Income Tax Calculator
 */

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter taxable income amount: ");
    scanf("%f", &income);

    if (income > 7000) {
        tax = 230.00f + (0.06f * (income - 7000.00f));
    }
    else if (income > 5250) {
        tax = 142.50f + (0.05f * (income - 5250.00f));
    }
    else if (income > 3750) {
        tax = 82.50f + (0.04f * (income - 3750.00f));
    }
    else if (income > 2250) {
        tax = 37.50f + (0.03f * (income - 2250.00f));
    }
    else if (income > 750) {
        tax = 7.50f + (0.02f * (income - 750.00f));
    }
    else {
        tax = 0.01f * income;
    }

    printf("Tax due: %.2f\n", tax);

    return 0;
}

