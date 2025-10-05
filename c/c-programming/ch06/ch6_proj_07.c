/* 
 *   File: ch6_proj_07.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 7 - Modify squares3.c
 */

#include <stdio.h>

int main(void)
{
    int n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    square = 1;
    odd = 3;
    for (int i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, square);
        square += odd;
        odd += 2;
    }

    return 0;
}
