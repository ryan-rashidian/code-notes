/* 
 *   File: ch7_proj_06.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-08
 *  Brief: Chapter 7 Project 7 - Modify ch3_proj_06.c
 */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;

    printf("Enter two fractions separated by a arithmetic operator: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &operator, &num2, &denom2);

    if ('+' == operator) {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if ('-' == operator) {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if ('*' == operator) {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else if ('/' == operator) {
        result_num = num1 * denom2;
        result_denom = num2 * denom1;
    }
    else {printf("Invalid Operator\n"); return 1;}

    // Calculate GCD
    int a = result_num; int b = result_denom;
    while (b != 0) {
        int rem = b;
        b = a % b;
        a = rem;
    }
    int gcd = a;

    // Simplify
    result_num = result_num / gcd;
    result_denom = result_denom / gcd;
    
    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}
