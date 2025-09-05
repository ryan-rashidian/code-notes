/* 
 *   File: ch5_proj_01.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 1 - Digit Counter
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 999) {
        printf("The number %d has 4 digit\n", num);
    }
    else if (num > 99) {
        printf("The number %d has 3 digit\n", num);
    }
    else if (num > 9) {
        printf("The number %d has 2 digit\n", num);
    }
    else {
        printf("The number %d has 1 digit\n", num);
    }

    return 0;
}
