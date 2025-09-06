/* 
 *   File: ch6_proj_08.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 8 - Calendar
 */

#include <stdio.h>

int main(void)
{
    int num_days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &num_days);
    printf("Enter starting day of the week (1-Sun, 7-Sat): ");
    scanf("%d", &start_day);

    for (int sd = 1; sd < start_day; sd++) {
        printf("   ");
    }

    for (int i = 1; i <= num_days; i++) {
        printf("%2d ", i);
        
        if ((i + start_day - 1) % 7 == 0) {printf("\n");}
    }
    printf("\n");

    return 0;
}

