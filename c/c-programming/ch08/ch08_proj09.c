/* 
 *   File: ch08_proj09.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-11
 *  Brief: Chapter 8 Project 9 - Random walk
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3


int main(void)
{
    char a[SIZE][SIZE];
    int direction;
    int letter;
    int start_letter = 'A';
    int current_row = 0, current_col = 0;

    // Initialize empty grid
    for (int r = 0; r < SIZE; r++)
        for (int c = 0; c < SIZE; c++)
            a[r][c] = '.';
    
    a[current_row][current_col] = start_letter; // Starting place

    srand((unsigned) time(NULL)); // Seed number generator

    // Random walk simulation
    for (int i = 1; i < 26; i++) {
        letter = start_letter + i;
        bool finding_path = true;
        bool tried[4] = {false};
        int try_count = 0;

        while (finding_path && try_count < 4) {
            direction = rand() % 4;
            if (tried[direction]) continue;

            tried[direction] = true;
            try_count++;

            int new_row = current_row;
            int new_col = current_col;

            if (direction == UP && current_row > 0)
                new_row--;
            else if (direction == DOWN && current_row < SIZE - 1)
                new_row++;
            else if (direction == LEFT && current_col > 0)
                new_col--;
            else if (direction == RIGHT && current_col < SIZE - 1)
                new_col++;
            else
                continue;

            if (a[new_row][new_col] == '.') {
                a[new_row][new_col] = letter;
                current_row = new_row;
                current_col = new_col;
                finding_path = false;
            }
        }

        if (finding_path) break; // Blocked in all directions
    }
    
    // Print grid
    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++)
            printf("%c  ", a[r][c]);
        printf("\n");
    }

    return 0;
}

