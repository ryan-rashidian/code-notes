/* 
 *   File: ch08_proj17.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-18
 *  Brief: Chapter 8 Project 17 - Magic square
 */

#include <stdio.h>


int main(void)
{
    int size;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int magic_square[size][size];

    // Initialize square with 0
    for (int r = 0; r < size; r++)
        for (int c = 0; c < size; c++)
            magic_square[r][c] = 0;

    int row = 0;
    int col = (size - 1) / 2;

    for (int num = 1; num < (size * size) + 1; num++) {
        magic_square[row][col] = num;

        // Find next in-bound position
        int next_row = (row - 1 + size) % size;
        int next_col = (col + 1) % size;

        // Check for collision
        if (magic_square[next_row][next_col] != 0)
            row = (row + 1) % size;
        else {
            row = next_row;
            col = next_col;
        }
    }

    // Print square
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++)
            printf("%5d", magic_square[r][c]);
        printf("\n");
    }

    return 0;
}

