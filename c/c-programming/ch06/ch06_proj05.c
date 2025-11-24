/* 
 *   File: ch06_proj05.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 5 - Modify ch04_proj01.c
 */

#include <stdio.h>

int main(void)
{
    int num, dig;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reversal is: ");
    do {
        dig = num % 10;
        printf("%d", dig);
        num /= 10;
    } while (num / 10);
    printf("%d\n", num);

    return 0;
}
