/* 
 *   File: ch10_proj_03.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-09
 *  Brief: Chapter 10 Project 3 - Modify poker.c #2
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// external variables
bool straight, flush, four, three;
int pairs;

// prototypes
void read_cards(int [NUM_CARDS][2]);
void sort_hand(int [NUM_CARDS][2]);
void analyze_hand(int [NUM_CARDS][2]);
void print_result(void);


int main(void)
{
    int hand[NUM_CARDS][2];

    for (;;) {
        read_cards(hand);
        sort_hand(hand);
        analyze_hand(hand);
        print_result();
    }
}


void read_cards(int hand[NUM_CARDS][2])
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    bool duplicate;
    int card_read = 0;

    for (int r = 0; r < NUM_CARDS; r++)
        for (int c = 0; c < 2; c++)
            hand[r][c] = 99;

    while (card_read < NUM_CARDS) {
        bad_card = false;
        duplicate = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;

        for (int r = 0; r < NUM_CARDS; r++)
            if (hand[r][0] == rank && hand[r][1] == suit)
                duplicate = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (duplicate)
            printf("Duplicate card; ignored.\n");
        else {
            hand[card_read][0] = rank;
            hand[card_read][1] = suit;
            card_read++;
        }
    }
}


void sort_hand(int hand[NUM_CARDS][2])
{
    // Implementation of selection sort algorithm
    for (int i = 0; i < NUM_CARDS - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < NUM_CARDS; j++) {
            if (hand[j][0] < hand[min_index][0])
                min_index = j;
        }
        int temp_rank = hand[i][0];
        int temp_suit = hand[i][1];
        hand[i][0] = hand[min_index][0];
        hand[i][1] = hand[min_index][1];
        hand[min_index][0] = temp_rank;
        hand[min_index][1] = temp_suit;
    }
}


void analyze_hand(int hand[NUM_CARDS][2])
{
    int rank, suit;
    
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    // check for flush
    suit = hand[0][1];
    for (int r = 1; r < NUM_CARDS; r++)
        if (hand[r][1] != suit) {
            flush = false;
            break;
        }

    // check for straight
    for (int r = 0; r < NUM_CARDS - 1; r++)
        if (hand[r][0] != hand[r + 1][0] - 1)
            straight = false;

    // check for 4-of-a-kind, 3-of-a-kind, and pairs
    for (int i = 0; i < NUM_CARDS;) {
        int same = 1;
        while (i + same < NUM_CARDS && hand[i][0] == hand[i + same][0])
            same++;

        if (same == 4) four = true;
        else if (same == 3) three = true;
        else if (same == 2) pairs ++;

        i += same;
    }
}


void print_result(void)
{
    if (straight && flush) printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (three)        printf("Three of a kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}

