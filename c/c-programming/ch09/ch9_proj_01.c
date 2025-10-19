/* 
 *   File: ch9_proj_01.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-18
 *  Brief: Chapter 9 Project 1 - Selection sort
 */

#include <stdio.h>

void selection_sort(int, int [*]);


int main(void)
{
    int n;

    // Get VLA size
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    // Build array from user input
    printf("Enter integers for array: ");
    for (int i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    // Sort array
    selection_sort(n, a);

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}


void selection_sort(int n, int a[n])
{
    // Pop last value of array
    int pop_last = a[n - 1];

    // Find index of largest value
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }

    // Swap largest value into last position
    if (pop_last < a[max_index]) {
        a[n - 1] = a[max_index];
        a[max_index] = pop_last; 
    }
                    
    // Recursively call through length of the array
    if (n > 1)
        selection_sort(n - 1, a);
}

