/* 
 *   File: ch5_proj_03.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-03
 *  Brief: Chapter 5 Project 3 - Modify broker.c
 */

#include <stdio.h>

int main(void)
{
    int shares;
    float price, value, commission, rival_commission;

    printf("Enter number of shares: ");
    scanf("%d", &shares);
    printf("Enter price per share: ");
    scanf("%f", &price);
    
    value = shares * price;

    if (shares < 2000) {
        rival_commission = 33.00f + 0.03f * shares;
    }
    else {
        rival_commission = 33.00f + 0.02f * shares;
    }

    if (value < 2500.00f) {
        commission = 30.00f + 0.017f * value;
    }
    else if (value < 6250.00f) {
        commission = 56.00f + 0.0066f * value;
    }
    else if (value < 20000.00f) {
        commission = 76.00f + 0.0034f * value;
    }
    else if (value < 50000.00f) {
        commission = 100.00f + 0.0022f * value;
    }
    else if (value < 500000.00f) {
        commission = 155.00f + 0.0011f * value;
    }
    else {
        commission = 255.00f + 0.0009f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n", commission);
    printf("Rival-Commission: $%.2f\n", rival_commission);

    return 0;
}
