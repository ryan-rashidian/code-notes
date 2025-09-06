/* 
 *   File: ch6_proj_06.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 6 - Squares 1 to n
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int even_sq = 2; even_sq * even_sq <= num; even_sq += 2) {
        printf("%d\n", even_sq * even_sq);
    }

    return 0;
}
