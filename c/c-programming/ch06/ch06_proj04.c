/* 
 *   File: ch06_proj04.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-05
 *  Brief: Chapter 6 Project 4 - Modify broker.c with Loop
 */

#include <stdio.h>

int main(void)
{
    float commission, value;

    for (;;) {
        printf("Enter value of trade (0 - exit): ");
        scanf("%f", &value);
        
        if (value == 0) {return 0;}

        if (value < 2500.00f)
            commission = 30.00f + 0.017f * value;
        else if (value < 6250.0f)
            commission = 56.00f + 0.0066f * value;
        else if (value < 20000.0f)
            commission = 76.00f + 0.0034f * value;
        else if (value < 50000.0f)
            commission = 100.00f + 0.0022f * value;
        else if (value < 500000.0f)
            commission = 155.00f + 0.001f * value;
        else
            commission = 255.00f + 0.0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;

        printf("Commission: $%.2f\n", commission);
    }
}

