/*
 *   File: ch3_proj_03.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 3 Project 3 - ISBN
 */

#include <stdio.h>

int main(void)
{
    int gs1_prefix,
        group_identifier,
        publisher_code,
        item_number,
        check_digit;

    printf("Enter ISBN: ");
    scanf(
        "%d-%d-%d-%d-%d",
        &gs1_prefix,
        &group_identifier,
        &publisher_code,
        &item_number,
        &check_digit
    );

    printf("GS1 prefix: %.3d", gs1_prefix);
    printf("Group identifier: %.1d", group_identifier);
    printf("Publisher code: %.3d", publisher_code);
    printf("Item number: %.5d", item_number);
    printf("Check digit: %.1d", check_digit);

    return 0;
}

