/*
 *   File: ch3_proj_04.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 3 Project 4 - Telephone Formatting
 */

#include <stdio.h>

int main(void)
{
    int area_code, first3, last4;

    printf("Enter phone number ((xxx) xxx-xxxx):");
    scanf("(%d)%d-%d", &area_code, &first3, &last4);

    printf("You entered %.3d.%.3d.%.4d\n", area_code, first3, last4);

    return 0;
}

