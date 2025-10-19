/* 
 *   File: ch9_proj_02.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-18
 *  Brief: Chapter 9 Project 2 - Modify ch5_proj_05.c
 */

#include <stdio.h>

float compute_tax(float);


int main(void)
{
    float income;

    printf("Enter taxable income amount: ");
    scanf("%f", &income);

    printf("Tax due: %.2f\n", compute_tax(income));

    return 0;
}


float compute_tax(float income)
{
    if (income > 7000)
        return 230.00f + (0.06f * (income - 7000.00f));
    else if (income > 5250)
        return 142.50f + (0.05f * (income - 5250.00f));
    else if (income > 3750)
        return 82.50f + (0.04f * (income - 3750.00f));
    else if (income > 2250)
        return 37.50f + (0.03f * (income - 2250.00f));
    else if (income > 750)
        return 7.50f + (0.02f * (income - 750.00f));
    else
        return 0.01f * income;
}

