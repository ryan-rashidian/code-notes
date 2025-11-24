/* 
 *   File: ch08_proj13.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-11
 *  Brief: Chapter 8 Project 13 - Modify ch07_proj11.c
 */

#include <ctype.h>
#include <stdio.h>


int main(void)
{
    char first_initial;
    char last_name[20];
    char ch;
    int n = 0;

    printf("Enter a first and last name: ");

    first_initial = toupper(getchar());
    while (getchar() != ' ') {
        ;
    }
    while ((ch = getchar()) != '\n' && n < 20) {
        last_name[n] = ch; // Store in array
        n++;
    }

    // Print formatted name
    for (int i = 0; i <= n; i++) {
        printf("%c", last_name[i]);
    }
    printf(" %c.\n", first_initial);

    return 0;
}

