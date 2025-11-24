/* 
 *   File: ch07_proj13.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-08
 *  Brief: Chapter 7 Project 13 - Average word length
 */

#include <stdio.h>


int main(void)
{
    char ch;
    int words = 1, letters = 0;
    float average_length;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n') {
        if (ch == ' ') {
            words++;
        } else {
            letters++;
        }
    }

    average_length = (float) letters / words;

    printf("Average word length: %.1f\n", average_length);

    return 0;
}

