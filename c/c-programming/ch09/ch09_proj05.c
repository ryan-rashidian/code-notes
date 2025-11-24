/* 
 *   File: ch09_proj05.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-18
 *  Brief: Chapter 9 Project 5 - Modify ch08_proj17.c
 */

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);


int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char magic_square[n][n];

    // Create magic square
    create_magic_square(n, magic_square);

    // Print square
    print_magic_square(n, magic_square);

    return 0;
}


void create_magic_square(int n, char magic_square[n][n])
{
    // Initialize square with 0
    for (int r = 0; r < n; r++)
        for (int c = 0; c < n; c++)
            magic_square[r][c] = 0;

    int row = 0;
    int col = (n - 1) / 2;

    for (int num = 1; num < (n * n) + 1; num++) {
        magic_square[row][col] = num;

        // Find next in-bound position
        int next_row = (row - 1 + n) % n;
        int next_col = (col + 1) % n;

        // Check for collision
        if (magic_square[next_row][next_col] != 0)
            row = (row + 1) % n;
        else {
            row = next_row;
            col = next_col;
        }
    }
}


void print_magic_square(int n, char magic_square[n][n])
{
    // Print square
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++)
            printf("%5d", magic_square[r][c]);
        printf("\n");
    }
}

