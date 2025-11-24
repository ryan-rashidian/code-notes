/* 
 *   File: ch08_proj15.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-12
 *  Brief: Chapter 8 Project 15 - Caesar cipher
 */

#include <stdio.h>

#define SIZE 80


int main(void)
{
    char message[SIZE];
    char ch;
    int shift;
    int len;

    // Get user input
    printf("Enter message to be encrypted: ");
    for (len = 0; (ch = getchar()) != '\n' && len < SIZE; len++)
        message[len] = ch;

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    // Encrypt message
    for (int i = 0; i <= len; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z')
            message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        else if (message[i] >= 'a' && message[i] <= 'z')
            message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
    }

    // Print message
    printf("Encrypted message: ");
    for (int i = 0; i <= len; i++)
        printf("%c", message[i]);
    printf("\n");

    return 0;
}

