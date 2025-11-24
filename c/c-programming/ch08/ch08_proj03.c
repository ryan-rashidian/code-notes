/* 
 *   File: ch08_proj03.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-09
 *  Brief: Chapter 8 Project 3 - Modify repdigit.c + multiple inputs
 */

#include <stdbool.h>
#include <stdio.h>


int main(void)
{
    long n;

    printf("Enter a number (0 to exit): ");
    scanf("%ld", &n);
    while (n > 0) {

        bool digit_seen[10] = {false};
        bool digit_repeat[10] = {false};
        int digit;
        int n_loop = n;
        while (n_loop > 0) {
            digit = n_loop % 10;
            if (digit_seen[digit])
                digit_repeat[digit] = true;
            digit_seen[digit] = true;
            n_loop /= 10;
        }

        printf("Repeated digit(s):");
        for (int i = 0; i < 10; i++) {
            if (digit_repeat[i])
                printf(" %d", i);
        }
        printf("\n");

        printf("Enter a number (0 to exit): ");
        scanf("%ld", &n);
    }

    return 0;
}

