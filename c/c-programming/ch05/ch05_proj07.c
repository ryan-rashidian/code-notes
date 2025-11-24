/* 
 *   File: ch05_proj07.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 7 - Find Largest and Smallest Integer
 */

#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4;
    int max1, max2, min1, min2;
    int smallest, largest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &d1, &d2, &d3, &d4);

    if (d1 > d2) {max1 = d1; min1 = d2;}
    else         {max1 = d2; min1 = d1;}

    if (d3 > d4) {max2 = d3; min2 = d4;}
    else         {max2 = d4; min2 = d3;}

    if (max1 > max2) {largest = max1;}
    else             {largest = max2;}

    if (min1 < min2) {smallest = min1;}
    else             {smallest = min2;}
    
    printf("Largest: %d | Smallest: %d\n", largest, smallest);

    return 0;
}

