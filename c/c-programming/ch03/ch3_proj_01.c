/*
 *   File: ch3_proj_01.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 3 Project 1 - Date Format
 */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date %d%d%d", year, month, day);

    return 0;
}

