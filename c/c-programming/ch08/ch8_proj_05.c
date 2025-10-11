/* 
 *   File: ch8_proj_05.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-10
 *  Brief: Chapter 8 Project 5 - Modify interest.c
 */

#include <stdio.h>

#define NUM_RATES(value) ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00


int main(void)
{
    int i, m, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES(value); i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d\t", year);
        for (i = 0; i < NUM_RATES(value); i++) {
            for (m = 1; m <= 12; m++)
                value[i] += ((double) (low_rate + i) / 12) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}

