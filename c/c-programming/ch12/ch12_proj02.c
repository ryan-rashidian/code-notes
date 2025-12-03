/* 
 *   File: ch12_proj02.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-28
 *  Brief: Chapter 12 Project 2 - Palindrome
 */

#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

#define SIZE 50


int main(void)
{
    char message[SIZE], ch, *p, *rev_p;
    bool palindrome = true;

    printf("Enter a message: ");

    for (p = &message[0]; (ch = getchar()) != '\n' && p < &message[SIZE];) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            *p = toupper(ch);
            p++;
        }
    }
    rev_p = p - 1;

    for (p = &message[0]; p <= rev_p; p++, rev_p--) {
        if (*p != *rev_p) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

