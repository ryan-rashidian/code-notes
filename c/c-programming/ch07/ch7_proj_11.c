/* 
 *   File: ch7_proj_11.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-07
 *  Brief: Chapter 7 Project 11 - Name formatting
 */

#include <ctype.h>
#include <stdio.h>


int main(void)
{
    char first_initial;
    char ch;

    printf("Enter a first and last name: ");

    first_initial = toupper(getchar());
    while (getchar() != ' ') {
        ;
    }
    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
    }

    printf(" %c.\n", first_initial);

    return 0;
}

