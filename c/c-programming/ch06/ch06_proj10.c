/* 
 *   File: ch06_proj10.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 10 - Modify ch05_proj09.c
 */

#include <stdio.h>

int main(void)
{
    int m_earliest, d_earliest, y_earliest;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m_earliest, &d_earliest, &y_earliest);

    for (int month, day, year;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0) {
            printf(
                "%.2d/%.2d/%.2d is the earliest date\n",
                m_earliest, d_earliest, y_earliest
            );

            return 0;
        }

        if (
            year < y_earliest ||
            year == y_earliest && month < m_earliest ||
            year == y_earliest && month == m_earliest && day < d_earliest
        ) {
            m_earliest = month;
            d_earliest = day;
            y_earliest = year;
        }
    }
}

