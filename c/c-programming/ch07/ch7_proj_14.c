/* 
 *   File: ch7_proj_14.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-08
 *  Brief: Chapter 7 Project 14 - Newton's method
 */

#include <math.h>
#include <stdio.h>


int main(void)
{
    double x;
    double y = 1;
    double new_y;
    double check;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        double quotient = x / y;
        new_y = (quotient + y) / 2;
        check = fabs(y - new_y);
        y = new_y;
    } while (check >= (0.00001 * y));

    printf("Square root: %.5f\n", y);

    return 0;
}

