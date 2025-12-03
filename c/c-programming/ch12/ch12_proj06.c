/* 
 *   File: ch12_proj06.c
 * Author: Ryan Rashidian
 *   Date: 2025-12-02
 *  Brief: Chapter 12 Project 6 - Modify qsort.c
 */

#include <stdio.h>

#define N 5

void quicksort(int [], int *low, int *high);
int *split(int [], int *low, int *high);


int main(void)
{
    int a[N] = {5, 3, 4, 8, 1};
    int *low = a;
    int *high = &a[N - 1];

    printf("Un-Sorted: ");
    for (int i  = 0; i < 5; i++) {
        printf("%d", a[i]);
        if (i != N - 1)
            printf(", ");
    }
    printf("\n");

    quicksort(a, low, high);

    printf("   Sorted: ");
    for (int i  = 0; i < 5; i++) {
        printf("%d", a[i]);
        if (i != N - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}

void quicksort(int a[], int *low, int *high)
{
    int *middle;

    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int *split(int a[], int *low, int *high)
{
    int part_element = *low;

    for (;;) {
        while (low < high && part_element <= *high)
            high--;
        if (low == high) break;
        *low++ = *high;

        while (low < high && *low <= part_element)
            low++;
        if (low >= high) break;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}

