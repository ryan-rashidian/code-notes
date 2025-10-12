/* 
 *   File: ch8_proj_10.c
 * Author: Ryan Rashidian
 *   Date: 2025-10-11
 *  Brief: Chapter 8 Project 10 - Modify ch05_proj_08.c
 */

#include <stdio.h>


int main(void)
{
    int dep[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arv[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int dep_hours, dep_minutes, arv_hours, arv_minutes;
    char dep_indicator, arv_indicator;
    int closest_index = 0;
    int hours, minutes, min_midnight;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    min_midnight = (hours * 60) + minutes;

    if (min_midnight <= dep[0] + (dep[1] - dep[0]) / 2)
        closest_index = 0;
    else if (min_midnight <= dep[1] + (dep[2] - dep[1]) / 2)
        closest_index = 1;
    else if (min_midnight <= dep[2] + (dep[3] - dep[2]) / 2)
        closest_index = 2;
    else if (min_midnight <= dep[3] + (dep[4] - dep[3]) / 2)
        closest_index = 3;
    else if (min_midnight <= dep[4] + (dep[5] - dep[4]) / 2)
        closest_index = 4;
    else if (min_midnight <= dep[5] + (dep[6] - dep[5]) / 2)
        closest_index = 5;
    else if (min_midnight <= dep[6] + (dep[7] - dep[6]) / 2)
        closest_index = 6;
    else
        closest_index = 7;

    dep_hours = dep[closest_index] / 60;
    dep_minutes = dep[closest_index] % 60;
    if (dep_hours > 12)
        dep_indicator = 'p';
    else
        dep_indicator = 'a';
    arv_hours = arv[closest_index] / 60;
    arv_minutes = arv[closest_index] % 60;
    if (arv_hours > 12)
        arv_indicator = 'p';
    else
        arv_indicator = 'a';

    printf(
        "Departure: %d:%.2d %c.m. | Arrival: %d:%.2d %c.m.\n",
        dep_hours, dep_minutes, dep_indicator,
        arv_hours, arv_minutes, arv_indicator
    );

    return 0;
}

