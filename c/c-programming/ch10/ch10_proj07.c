/* 
 *   File: ch10_proj07.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-19
 *  Brief: Chapter 10 Project 7 - Seven-segment display
 */

#include <stdio.h>


#define MAX_DIGITS 10

int segments[MAX_DIGITS] = {0, 3, 7, 11, 15, 19, 23, 27, 31, 35};
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);


int main(void)
{
    char ch;

    clear_digits_array();

    printf("Enter a number: ");

    int position = 0;
    while ((ch = getchar()) != '\n' && position < MAX_DIGITS) {
        switch (ch) {
            case '0': process_digit(0, position); position++; break;
            case '1': process_digit(1, position); position++; break;
            case '2': process_digit(2, position); position++; break;
            case '3': process_digit(3, position); position++; break;
            case '4': process_digit(4, position); position++; break;
            case '5': process_digit(5, position); position++; break;
            case '6': process_digit(6, position); position++; break;
            case '7': process_digit(7, position); position++; break;
            case '8': process_digit(8, position); position++; break;
            case '9': process_digit(9, position); position++; break;
            default: break;
        }
    }

    print_digits_array();

    return 0;
}

void clear_digits_array(void)
{
    for (int row = 0; row < 4; row++)
        for (int col = 0; col < MAX_DIGITS * 4; col++)
            digits[row][col] = ' ';

}

void process_digit(int digit, int position)
{
    if (digit == 0) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position]] = '|';
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position]] = '|';
        digits[2][segments[position] + 1] = '_';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 1) {
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 2) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position] + 1] = '_';
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position]] = '|';
        digits[2][segments[position] + 1] = '_';
    }
    else if (digit == 3) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position] + 1] = '_';
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position] + 1] = '_';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 4) {
        digits[1][segments[position]] = '|';
        digits[1][segments[position] + 1] = '_';
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 5) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position]] = '|';
        digits[1][segments[position] + 1] = '_';
        digits[2][segments[position] + 1] = '_';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 6) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position]] = '|';
        digits[1][segments[position] + 1] = '_';
        digits[2][segments[position]] = '|';
        digits[2][segments[position] + 1] = '_';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 7) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 8) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position]] = '|';
        digits[1][segments[position] + 1] = '_';
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position]] = '|';
        digits[2][segments[position] + 1] = '_';
        digits[2][segments[position] + 2] = '|';
    }
    else if (digit == 9) {
        digits[0][segments[position] + 1] = '_';
        digits[1][segments[position]] = '|';
        digits[1][segments[position] + 1] = '_';
        digits[1][segments[position] + 2] = '|';
        digits[2][segments[position] + 1] = '_';
        digits[2][segments[position] + 2] = '|';
    }
}

void print_digits_array(void)
{
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < MAX_DIGITS * 4; col++)
            printf("%c", digits[row][col]);
        printf("\n");
    }
}

