/*
 *   File: ch02_proj04.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 2 Project 4 - Tax Adder
 */

#include <stdio.h>

#define SALES_TAX 0.05f

int main(void)
{
    float amount;
    float final_amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    final_amount = amount * (1 + final_amount);

    printf("With tax added: $%.2f: \n", final_amount);

    return 0;
}

