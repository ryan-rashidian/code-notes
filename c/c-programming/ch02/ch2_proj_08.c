/*
 *   File: ch2_proj_08.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 2 Project 8 - Loan Calculator
 */

#include <stdio.h>

int main(void)
{
    float loan, rate, payment, monthly_rate;
    float first, second, third;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_rate = (rate / 100.0f) / 12.0f;

    first = (loan * (monthly_rate + 1)) - payment;
    second = (first * (monthly_rate + 1)) - payment;
    third = (second * (monthly_rate + 1)) - payment;

    printf("Balance remaining after first payment: %.2f\n", first);
    printf("Balance remaining after second payment: %.2f\n", second);
    printf("Balance remaining after third payment: %.2f\n", third);

    return 0;
}
