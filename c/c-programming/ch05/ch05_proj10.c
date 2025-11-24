/* 
 *   File: ch05_proj10.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 10 - Letter Grade
 */

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%1d", &grade);

    switch (grade) {
        case 9: printf("A\n");
                break;
        case 8: printf("B\n");
                break;
        case 7: printf("C\n");
                break;
        case 6: printf("D\n");
                break;
        default: printf("F\n");
    }

    return 0;
}
