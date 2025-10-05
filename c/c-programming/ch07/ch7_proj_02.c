/* 
 *   File: ch7_proj_02.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-07
 *  Brief: Chapter 7 Project 2 - Modify square2.c
 */

#include <stdio.h>

int main(void)
{
    long int i, n;
    

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%ld", &n);
    getchar(); // Discard newline char

    for (i = 1; i <= n; i++) {
        printf("%10ld%10ld\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            while (getchar() != '\n')
                ;
        }
    }

    return 0;
}

