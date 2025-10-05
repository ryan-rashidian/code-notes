/*
 *   File: ch3_proj_06.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 3 Project 6 - Modify addfrac.c
 */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
