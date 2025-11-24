/* 
 *   File: ch08_proj02.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-09
 *  Brief: Chapter 8 Project 2 - Modify repdigit.c + table
 */

#include <stdbool.h>
#include <stdio.h>


int main(void)
{
    bool digit_seen[10] = {false};
    int digit_repeat[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] = true;
        digit_repeat[digit]++;
        n /= 10;
    }

    printf("Digit:     \t");
    for (int i = 0; i < 10; i++)
        printf("%d  ", i);
    printf("\n");

    printf("Occurences:\t");
    for (int i = 0; i < 10; i++) 
        printf("%d  ", digit_repeat[i]);
    printf("\n");

    return 0;
}
