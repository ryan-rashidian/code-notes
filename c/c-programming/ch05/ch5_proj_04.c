/* 
 *   File: ch5_proj_04.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 4 - Beaufort Scale
 */

#include <stdio.h>

int main(void)
{
    int wind_speed;
    
    printf("Enter wind speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed > 63) {
        printf("Hurricane\n");
    }
    else if (wind_speed > 47) {
        printf("Storm\n");
    }
    else if (wind_speed > 27) {
        printf("Gale\n");
    }
    else if (wind_speed > 3) {
        printf("Breeze\n");
    }
    else if (wind_speed > 1) {
        printf("Light Air\n");
    }
    else {
        printf("Calm\n");
    }

    return 0;
}

