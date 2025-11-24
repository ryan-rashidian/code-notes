/* 
 *   File: ch06_proj09.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 9 - Modify ch02_proj08.c
 */

#include <stdio.h>

int main(void)
{
    float loan, rate, payment, monthly_rate;
    int num_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &num_payments);

    monthly_rate = (rate / 100.0f) / 12.0f;

    for (int i = 1; num_payments >= i; i++) {
        loan = (loan * (monthly_rate + 1)) - payment;

        printf("Balance remaining after payment %d: $%.2f\n", i, loan);
    }

    return 0;
}

