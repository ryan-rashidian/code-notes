/* 
 *   File: ch7_proj_12.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-08
 *  Brief: Chapter 7 Project 12 - Expression evaluator
 */

#include <stdio.h>


int main(void)
{
    float x, y;
    char operator;

    printf("Enter an expression: ");

    scanf(" %f", &x);
    while ((operator = getchar()) != '\n') {
        scanf(" %f", &y);

        if ('+' == operator) {
            x += y;
        }
        else if ('-' == operator) {
            x -= y;
        }
        else if ('*' == operator) {
            x *= y;
        }
        else if ('/' == operator) {
            x /= y;
        }
        else {
            printf("Invalid Operator\n");
            return 1;
        }
    }

    printf("Value of expression: %.1f\n", x);

    return 0;
}

