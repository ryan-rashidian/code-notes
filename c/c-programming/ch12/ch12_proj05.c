/* 
 *   File: ch12_proj05.c
 * Author: Ryan Rashidian
 *   Date: 2025-12-02
 *  Brief: Chapter 12 Project 5 - Modify ch08_proj14.c
 */

#include <stdbool.h>
#include <stdio.h>

#define SIZE 50


int main(void)
{
    char sentence[SIZE + 1], word[SIZE + 1];
    char ch, term_ch, *p, *word_p;

    printf("Enter a sentence: ");
    for (p = sentence; (ch = getchar()) != '\n' && p <= &sentence[SIZE]; p++)
        *p = ch;
    p--;
    term_ch = *p;
    p--;

    bool first_word = true; // To avoid printing a spacer before first word

    // Reverse words
    while (p >= sentence) {
        int word_len = 0;

        while (*p != ' ' && p >= sentence) {
            word_len++;
            p--;
        }

        if (!first_word && p != sentence)
            printf(" ");
        first_word = false;

        word_p = p + 1;
        for (int i = 0; i < word_len; i++)
            printf("%c", *(word_p + i));

        p--;
    }

    printf("%c\n", term_ch);

    return 0;
}

