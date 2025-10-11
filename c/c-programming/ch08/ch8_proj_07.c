/* 
 *   File: ch8_proj_07.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-10
 *  Brief: Chapter 8 Project 7 - 5x5 array
 */

#include <stdio.h>


int main(void)
{
    int a[5][5];

    for (int r = 0; r <= 4; r++) {
        printf("Enter row %d: ", r + 1);
        scanf(
            "%d %d %d %d %d",
            &a[0][r], &a[1][r], &a[2][r], &a[3][r], &a[4][r]
        );
    }

    printf("Row sums: ");
    for (int r = 0; r <= 4; r++) {
        int sum = 0;
        for (int c = 0; c <= 4; c++) {
            sum += a[c][r];
        }
        printf(" %d", sum);
    }
    printf("\n");

    printf("Column sums: ");
    for (int c = 0; c <= 4; c++) {
        int sum = 0;
        for (int r = 0; r <= 4; r++) {
            sum += a[c][r];
        }
        printf(" %d", sum);
    }
    printf("\n");

    return 0;
}

