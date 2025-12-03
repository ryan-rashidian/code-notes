/* 
 *   File: ch12_proj01.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-28
 *  Brief: Chapter 12 Project 1 - Message reversal
 */

#include <stdio.h>

#define SIZE 50


int main(void)
{
    char message[SIZE], ch, *p;

    printf("Enter a message: ");

    for (p = &message[0]; (ch = getchar()) != '\n' && p < &message[SIZE]; p++)
        *p = ch;

    printf("Reversal is: ");
    for (;p >= &message[0]; p--) {
        ch = *p;
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}

