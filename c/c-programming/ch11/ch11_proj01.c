/* 
 *   File: ch11_proj01.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-24
 *  Brief: Chapter 11 Project 1 - Modify ch02_proj07.c
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);


int main(void)
{
    int dollars;
    int twenties, tens, fives, ones;

    printf("Enter dollar amount: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    *tens = (dollars - (*twenties * 20)) / 10;
    *fives = (dollars - (*twenties * 20) - (*tens * 10)) / 5;
    *ones = (dollars - (*twenties * 20) - (*tens * 10) - (*fives * 5)) / 1;

}


