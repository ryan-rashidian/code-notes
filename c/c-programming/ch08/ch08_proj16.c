/* 
 *   File: ch08_proj16.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-12
 *  Brief: Chapter 8 Project 16 - Anagram test
 */

#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int letters_seen[26] = {0};
    char ch;
    
    // Get input
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
        letters_seen[toupper(ch) - 'A']++;

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
        letters_seen[toupper(ch) - 'A']--;

    // Check for anagram
    for (int i = 0; i < 26; i++) {
        if (letters_seen[i] != 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    printf("The words are anagrams.\n");

    return 0;
}

