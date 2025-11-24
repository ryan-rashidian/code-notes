/* 
 *   File: ch05_proj02.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 2 - 24-hour Conversion
 */

#include <stdio.h>

int main(void)
{
    int hour, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    if (hour > 12) {
        hour = hour - 12;
        printf("%d:%.2d PM\n", hour, minutes);
    }
    else if (hour == 0) {
        hour = 12;
        printf("%d:%.2d AM\n", hour, minutes);
    }
    else {
        printf("%d:%.2d AM\n", hour, minutes);
    }

    return 0;
}

