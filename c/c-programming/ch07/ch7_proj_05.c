/* 
 *   File: ch7_proj_05.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-08
 *  Brief: Chapter 7 Project 5 - SCRABBLE
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Enter a word: ");

    int score = 0;
    do {
        scanf("%c", &ch);

        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                score += 1;
                break;
            case 'D': case 'G':
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4;
                break;
            case 'K':
                score += 5;
                break;
            case 'J': case 'X':
                score += 8;
                break;
            case 'Q': case 'Z':
                score += 10;
                break;
        }

    } while (ch != '\n');

    printf("Scrabble value: %d\n", score);

    return 0;
}
