/*
 *   File: ch3_proj_02.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 3 Project 2 - Product Format
 */

#include <stdio.h>

int main(void)
{
    float unit_price;
    int item_num;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf(
        "%d\t\t$ %f\t\t%.2d/%.2d/%.4d\n",
        item_num, unit_price, month, day, year
    );

    return 0;
}

