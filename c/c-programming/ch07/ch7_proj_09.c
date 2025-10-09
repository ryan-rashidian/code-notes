/* 
 *   File: ch7_proj_09.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-08
 *  Brief: Chapter 7 Project 9 - 12-hour -> 24-hour clock converter
 */

#include <ctype.h>
#include <stdio.h>


int main(void)
{
    int hours, minutes;
    char indicator;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &indicator);

    if (toupper(indicator) == 'P') {
        hours += 12;
    }

    printf("%.2d:%.2d\n", hours, minutes);

    return 0;
}

