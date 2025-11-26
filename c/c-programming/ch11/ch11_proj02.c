/* 
 *   File: ch11_proj02.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-25
 *  Brief: Chapter 11 Project 2 - Modify ch05_proj08.c
 */

#include <stdio.h>

void find_closest_flight(int desired_time,
                         int *departure_time, 
                         int *arrival_time);

int main(void)
{
    int hours, minutes;
    int desired_time, departure_time, arrival_time;
    int dep_hours, dep_minutes, arv_hours, arv_minutes;
    char dep_meridiem, arv_meridiem;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    desired_time = (hours * 60) + minutes;

    find_closest_flight(desired_time, &departure_time, &arrival_time);

    dep_hours = departure_time / 60;
    dep_minutes = departure_time % 60;
    if (dep_hours > 12) {dep_hours = dep_hours - 12; dep_meridiem = 'p';}
    else dep_meridiem = 'a';

    arv_hours = arrival_time / 60;
    arv_minutes = arrival_time % 60;
    if (arv_hours > 12) {arv_hours = arv_hours - 12; arv_meridiem = 'p';}
    else arv_meridiem = 'a';

    printf(
        "Departure: %d:%.2d %c.m. | Arrival: %d:%.2d %c.m.\n",
        dep_hours, dep_minutes, dep_meridiem,
        arv_hours, arv_minutes, arv_meridiem
    );

    return 0;
}

void find_closest_flight(int desired_time,
                         int *departure_time, 
                         int *arrival_time)
{
    int dep1 = 480, arv1 = 616;   // 8:00  a.m. -> 10:16 a.m.
    int dep2 = 583, arv2 = 712;   // 9:43  a.m. -> 11:52 a.m.
    int dep3 = 679, arv3 = 811;   // 11:19 a.m. -> 1:31  p.m.
    int dep4 = 767, arv4 = 900;   // 12:47 p.m. -> 3:00  p.m.
    int dep5 = 840, arv5 = 968;   // 2:00  p.m. -> 4:08  p.m.
    int dep6 = 945, arv6 = 1075;  // 3:45  p.m. -> 5:55  p.m.
    int dep7 = 1140, arv7 = 1280; // 7:00  p.m. -> 9:20  p.m.
    int dep8 = 1305, arv8 = 1438; // 9:45  p.m. -> 11:58 p.m.

    if (desired_time <= dep1 + (dep2 - dep1) / 2) {
        *departure_time = dep1;
        *arrival_time = arv1;
    }
    else if (desired_time <= dep2 + (dep3 - dep2) / 2) {
        *departure_time = dep2;
        *arrival_time = arv2;
    }
    else if (desired_time <= dep3 + (dep4 - dep3) / 2) {
        *departure_time = dep3;
        *arrival_time = arv3;
    }
    else if (desired_time <= dep4 + (dep5 - dep4) / 2) {
        *departure_time = dep4;
        *arrival_time = arv4;
    }
    else if (desired_time <= dep5 + (dep6 - dep5) / 2) {
        *departure_time = dep5;
        *arrival_time = arv5;
    }
    else if (desired_time <= dep6 + (dep7 - dep6) / 2) {
        *departure_time = dep6;
        *arrival_time = arv6;
    }
    else if (desired_time <= dep7 + (dep8 - dep7) / 2) {
        *departure_time = dep7;
        *arrival_time = arv7;
    }
    else {
        *departure_time = dep7;
        *arrival_time = arv7;
    }
}

