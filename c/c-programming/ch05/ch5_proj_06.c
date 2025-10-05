/* 
 *   File: ch5_proj_06.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 6 - Modify upc.c
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, l;
    int first_sum, second_sum, total, check_dig;

    printf("Enter all 12 digits of UPC: ");
    scanf(
        "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &l
    );

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    check_dig = 9 - ((total - 1) % 10);

    if (check_dig == l) {
        printf("VALID\n");
    }
    else {
        printf("NOT VALID\n");
    }

    return 0;
}
