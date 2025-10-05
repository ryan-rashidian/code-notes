/* 
 *   File: ch5_proj_09.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 9 - Earliest Date
 */

#include <stdio.h>

int main(void)
{
    int month1, month2;
    int day1, day2;
    int year1, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2) {
        printf(
            "%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            month1, day1, year1, month2, day2, year2
        );
        return 0;
    }
    else if (year1 > year2) {
        printf(
            "%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            month2, day2, year2, month1, day1, year1
        );
        return 0;
    }
    if (month1 < month2) {
        printf(
            "%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            month1, day1, year1, month2, day2, year2
        );
        return 0;
    }
    else if (month1 > month2) {
        printf(
            "%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            month2, day2, year2, month1, day1, year1
        );
        return 0;
    }
    if (day1 < day2) {
        printf(
            "%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            month1, day1, year1, month2, day2, year2
        );
        return 0;
    }
    else if (day1 > day2) {
        printf(
            "%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            month2, day2, year2, month1, day1, year1
        );
        return 0;
    }
    else {
        printf(
            "%.2d/%.2d/%.2d is the same as %.2d/%.2d/%.2d\n",
            month2, day2, year2, month1, day1, year1
        );
    }

    return 0;
}

