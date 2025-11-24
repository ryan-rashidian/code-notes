/* 
 *   File: ch08_proj08.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-10
 *  Brief: Chapter 8 Project 8 - Modify ch09_proj07.c test scores
 */

#include <stdio.h>

#define SIZE 5


int main(void)
{
    int a[SIZE][SIZE];

    for (int s = 0; s < SIZE; s++) {
        printf("Enter 5 test scores for student #%d: ", s + 1);
        scanf(
            "%d %d %d %d %d",
            &a[s][0], &a[s][1], &a[s][2], &a[s][3], &a[s][4]
        );
    }

    printf("Total Scores:\n");
    for (int s = 0; s < SIZE; s++) {
        int sum = 0;
        for (int q = 0; q < SIZE; q++) {
            sum += a[s][q];
        }
        printf("Student #%d - %d\n", s, sum);
    }

    printf("Average scores:\n");
    for (int s = 0; s < SIZE; s++) {
        int sum = 0;
        for (int q = 0; q < SIZE; q++) {
            sum += a[s][q];
        }
        printf("Student #%d - %d\n", s + 1, sum / 5);
    }

    printf("Quiz average:\n");
    for (int q = 0; q < SIZE; q++) {
        int sum = 0;
        for (int s = 0; s < SIZE; s++) {
            sum += a[s][q];
        }
        printf("Quiz #%d - %d\n", q + 1, sum / 5);
    }

    printf("Quiz high score:\n");
    for (int q = 0; q < SIZE; q++) {
        int highest = 0;
        for (int s = 0; s < SIZE; s++) {
            if (a[s][q] > highest)
                highest = a[s][q];
        }
        printf("Quiz #%d - %d\n", q + 1, highest);
    }

    printf("Quiz low score:\n");
    for (int q = 0; q < SIZE; q++) {
        int lowest = 100;
        for (int s = 0; s < SIZE; s++) {
            if (a[s][q] < lowest)
                lowest = a[s][q];
        }
        printf("Quiz #%d - %d\n", q + 1, lowest);
    }

    return 0;
}

