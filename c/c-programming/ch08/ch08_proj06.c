/* 
 *   File: ch08_proj06.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-10
 *  Brief: Chapter 8 Project 6 - B1FF translator
 */

#include <ctype.h>
#include <stdio.h>

#define MAX_SIZE 50

int main(void)
{
    char ch, message[MAX_SIZE + 1];
    int i = 0;

    // Store message string
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        if (i < MAX_SIZE)
            message[i++] = toupper(ch);
    }
    message[i] = '\0';

    // Translate
    for (i = 0; message[i] != '\0'; i++) {
        switch (message[i]) {
            case 'A': message[i] = '4'; break;
            case 'B': message[i] = '8'; break;
            case 'E': message[i] = '3'; break;
            case 'I': message[i] = '1'; break;
            case 'O': message[i] = '0'; break;
            case 'S': message[i] = '5'; break;
        }
    }

    // Print translation
    for (i = 0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}

