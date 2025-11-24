/* 
 *   File: ch05_proj08.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 8 - Flight Planner
 */

#include <stdio.h>

int main(void)
{
    int dep1 = 480;   // 8:00 a.m.
    int dep2 = 583;   // 9:43 a.m.
    int dep3 = 679;   // 11:19 a.m.
    int dep4 = 767;   // 12:47 p.m.
    int dep5 = 840;   // 2:00 p.m.
    int dep6 = 945;   // 3:45 p.m.
    int dep7 = 1140;  // 7:00 p.m.
    int dep8 = 1305;  // 9:45 p.m.

    int hours, minutes, min_midnight;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    min_midnight = (hours * 60) + minutes;

    if (min_midnight <= dep1 + (dep2 - dep1) / 2) {
        printf("Departure: 8:00 a.m. | Arrival: 10:16 a.m.\n");
    }
    else if (min_midnight <= dep2 + (dep3 - dep2) / 2) {
        printf("Departure: 9:43 a.m. | Arrival: 11:52 a.m.\n");
    }
    else if (min_midnight <= dep3 + (dep4 - dep3) / 2) {
        printf("Departure: 11:19 a.m. | Arrival: 1:31 p.m.\n");
    }
    else if (min_midnight <= dep4 + (dep5 - dep4) / 2) {
        printf("Departure: 12:47 p.m. | Arrival: 3:00 p.m.\n");
    }
    else if (min_midnight <= dep5 + (dep6 - dep5) / 2) {
        printf("Departure: 2:00 p.m. | Arrival: 4:08 p.m.\n");
    }
    else if (min_midnight <= dep6 + (dep7 - dep6) / 2) {
        printf("Departure: 3:45 p.m. | Arrival: 5:55 p.m.\n");
    }
    else if (min_midnight <= dep7 + (dep8 - dep7) / 2) {
        printf("Departure: 7:00 p.m. | Arrival: 9:20 p.m.\n");
    }
    else {
        printf("Departure: 9:45 p.m. | Arrival: 11:58 p.m.\n");
    }

    return 0;
}

