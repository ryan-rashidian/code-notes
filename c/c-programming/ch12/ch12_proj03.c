/* 
 *   File: ch12_proj03.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-28
 *  Brief: Chapter 12 Project 3 - Simplify ch12_proj01.c
 */

#include <stdio.h>

#define SIZE 50


int main(void)
{
    char message[SIZE], ch, *p;

    printf("Enter a message: ");

    for (p = message; (ch = getchar()) != '\n' && p < &message[SIZE]; p++)
        *p = ch;

    printf("Reversal is: ");
    for (;p >= message; p--) {
        ch = *p;
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}

