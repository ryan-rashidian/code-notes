/* 
 *   File: ch08_proj04.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-09
 *  Brief: Chapter 8 Project 4 - Modify reverse.c
 */

#include <stdio.h>

#define N 10


int main(void)
{
    int a[N], i;
    int SIZE = sizeof(a) / sizeof(a[0]);

    printf("Enter %d numbers: ", N);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = SIZE - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

