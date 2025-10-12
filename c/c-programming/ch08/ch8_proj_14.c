/* 
 *   File: ch8_proj_14.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-11
 *  Brief: Chapter 8 Project 14 - Word reverse
 */

#include <stdbool.h>
#include <stdio.h>

#define SIZE 50


int main(void)
{
    char string[SIZE + 1], word[SIZE + 1];
    char ch, term_ch;
    int pos = 0;
    int str_length;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && pos < SIZE) {
        string[pos] = ch;
        pos++;
    }
    term_ch = string[pos - 1]; // terminating character
    pos -= 2; // Set position to last char
    str_length = pos;

    bool first_word = true;

    // Reverse words
    while (pos >= 0) {
        int word_len = 0;

        while (string[pos] != ' ' && pos >= 0) {
            word_len++;
            pos--;
        }

        if (!first_word)
            printf(" ");
        first_word = false;

        for (int i = 0; i < word_len; i++)
            printf("%c", string[pos + i + 1]);

        pos--;
    }

    printf("%c\n", term_ch);

    return 0;
}

