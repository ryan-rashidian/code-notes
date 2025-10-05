/* 
 *   File: ch7_proj_04.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-07
 *  Brief: Chapter 7 Project 4 - Phone Number Translator
 */

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a phone number: ");

    do {
        scanf("%c", &ch);
        if ('A' <= ch && ch <= 'C') {
            ch = '2';
        }
        else if ('D' <= ch && ch <= 'F') {
            ch = '3';
        }
        if ('G' <= ch && ch <= 'I') {
            ch = '4';
        }
        if ('J' <= ch && ch <= 'L') {
            ch = '5';
        }
        if ('M' <= ch && ch <= 'O') {
            ch = '6';
        }
        if ('P' <= ch && ch <= 'S') {
            ch = '7';
        }
        if ('T' <= ch && ch <= 'V') {
            ch = '8';
        }
        if ('W' <= ch && ch <= 'Y') {
            ch = '9';
        }

        printf("%c", ch);

    } while (ch != '\n');

    return 0;
}

