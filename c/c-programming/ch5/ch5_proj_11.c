/* 
 *   File: ch5_proj_11.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 10 - Word for Number
 */

#include <stdio.h>

int main(void)
{
    int num, tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%2d", &num);

    tens = num / 10;
    ones = num % 10;

    printf("You entered the number ");

    if (num == 0) {printf("zero\n");}
    else if (num >= 10 && num <= 19) {
        switch (num) {
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
            case 13: printf("thirteen"); break;
            case 14: printf("fourteen"); break;
            case 15: printf("fifteen"); break;
            case 16: printf("sixteen"); break;
            case 17: printf("seventeen"); break;
            case 18: printf("eighteen"); break;
            case 19: printf("nineteen"); break;
        }
    }
    else {
        switch (tens) {
            case 9: printf("ninety"); break;
            case 8: printf("eighty"); break;
            case 7: printf("seventy"); break;
            case 6: printf("sixty"); break;
            case 5: printf("fifty"); break;
            case 4: printf("fourty"); break;
            case 3: printf("thirdy"); break;
            case 2: printf("twenty"); break;
        }
        if (tens && ones) {
            printf("-");
        }
        switch (ones) {
            case 9: printf("nine"); break;
            case 8: printf("eight"); break;
            case 7: printf("seven"); break;
            case 6: printf("six"); break;
            case 5: printf("five"); break;
            case 4: printf("four"); break;
            case 3: printf("three"); break;
            case 2: printf("two"); break;
            case 1: printf("one"); break;
        }
    }
    printf(".\n");

    return 0;
}

