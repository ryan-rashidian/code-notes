/*
 *   File: ch02_proj03.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 2 Project 3 - Volume of a Sphere Input
 */

#include <stdio.h>

#define PI 3.14f

int main(void)
{
    float radius, volume;

    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume = (4.00f / 3.00f) * PI * (radius * radius * radius);

    printf("Volume: %.2f\n", volume);

    return 0;
}

