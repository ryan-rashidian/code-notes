/* 
 *   File: ch9_proj_08.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-20
 *  Brief: Chapter 9 Project 8 - Craps
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);


int main(void)
{
    int wins = 0, loses = 0;

    srand((unsigned) time(NULL)); // Seed number generator

    for (;;) {
        bool game = play_game();
        char replay = 'X';

        if (game) {
            printf("You win!\n");
            wins++;
        }
        else {
            printf("You lose!\n");
            loses++;
        }

        printf("Play again? ");
        scanf(" %c", &replay);

        if (replay != 'Y' && replay != 'y')
            break;
    }

    printf("Wins: %d\tLosses: %d\n", wins, loses);

    return 0;
}


int roll_dice(void)
{
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    return dice1 + dice2;
}


bool play_game(void)
{
    int roll1 = roll_dice();

    printf("You rolled: %d\n", roll1);

    if (roll1 == 7 || roll1 == 11)
        return true;
    if (roll1 == 2 || roll1 == 3 || roll1 == 12)
        return false;

    for (;;) {
        int roll2 = roll_dice();

        printf("You rolled: %d\n", roll2);

        if (roll2 == roll1)
            return true;
        else if (roll2 == 7)
            return false;
    }
}

