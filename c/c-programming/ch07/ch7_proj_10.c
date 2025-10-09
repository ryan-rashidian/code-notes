/* 
 *   File: ch7_proj_10.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-07
 *  Brief: Chapter 7 Project 10 - Vowel counter
 */

#include <ctype.h>
#include <stdio.h>


int main()
{
    char ch;
    int vowels = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        if (
            ch == 'A' | 
            ch == 'E' |
            ch == 'I' |
            ch == 'O' |
            ch == 'U'
        ) {
            vowels++;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}

