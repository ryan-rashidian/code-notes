/* 
 *   File: ch9_proj_04.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-18
 *  Brief: Chapter 9 Project 4 - Modify ch8_proj_16.c
 */

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);


int main(void)
{
    int counts[26] = {0};
    int counts2[26] = {0};
    
    // Get input
    read_word(counts);
    read_word(counts2);

    // Check for anagram
    if (equal_array(counts, counts2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}


void read_word(int counts[26])
{
    char ch;
    // Get input
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
        counts[toupper(ch) - 'A']++;
}


bool equal_array(int counts[26], int counts2[26])
{
    // Cancel out letters
    for (int i = 0; i < 26; i++)
        counts[i] -= counts2[i];

    // Check for anagram
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }
    return true;
}

