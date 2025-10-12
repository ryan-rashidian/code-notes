/* 
 *   File: ch8_proj_11.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-11
 *  Brief: Chapter 8 Project 11 - Modify ch7_proj_04.c
 */

#include <stdio.h>

#define N 15


int main(void)
{
    char phone_number[N];

    // Prompt user
    printf("Enter a phone number: ");
    for (int i = 0; i < N; i++)
        scanf("%c", &phone_number[i]);

    // Translate
    for (int i = 0; i < N; i++) {
        if ('A' <= phone_number[i] && phone_number[i] <= 'C')
            phone_number[i] = '2';
        if ('D' <= phone_number[i] && phone_number[i] <= 'F')
            phone_number[i] = '3';
        if ('G' <= phone_number[i] && phone_number[i] <= 'I')
            phone_number[i] = '4';
        if ('J' <= phone_number[i] && phone_number[i] <= 'L')
            phone_number[i] = '5';
        if ('M' <= phone_number[i] && phone_number[i] <= 'O')
            phone_number[i] = '6';
        if ('P' <= phone_number[i] && phone_number[i] <= 'S')
            phone_number[i] = '7';
        if ('T' <= phone_number[i] && phone_number[i] <= 'V')
            phone_number[i] = '8';
        if ('W' <= phone_number[i] && phone_number[i] <= 'Y')
            phone_number[i] = '9';
    } 

    // Print translated number
    printf("In numeric form: ");
    for (int i = 0; i < N; i++)
        printf("%c", phone_number[i]);

    return 0;
}

