/* 
 *   File: ch8_proj_01.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-09
 *  Brief: Chapter 8 Project 1 - Modify repdigit.c
 */

#include <stdbool.h>
#include <stdio.h>


int main(void)
{
    bool digit_seen[10] = {false};
    bool digit_repeat[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            digit_repeat[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s):");
    for (int i = 0; i < 10; i++) {
        if (digit_repeat[i])
            printf(" %d", i);
    }
    printf("\n");

    return 0;
}

