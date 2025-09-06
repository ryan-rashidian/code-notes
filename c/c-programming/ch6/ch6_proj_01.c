/* 
 *   File: ch6_proj_01.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 1 - Display Largest Number
 */

#include <stdio.h>

int main(void)
{
    float entry_num, largest_num = 0.0f;

    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &entry_num);

        if (entry_num > largest_num) {
            largest_num = entry_num;
        }
        if (entry_num <= 0) {
            printf("The largest number entered was: %.2f\n", largest_num);
            return 0;
        }
    }
}

