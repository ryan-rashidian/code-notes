/*
 *   File: ch2_proj_02.c
 * Author: Ryan Rashidian
 *   Date: 2025-08-31
 *  Brief: Chapter 2 Project 2 - Volume of a Sphere
 */

#include <stdio.h>

#define PI 3.14f

int main(void)
{
    float radius = 10.00f;
    float volume;

    volume = (4.00f / 3.00f) * PI * (radius * radius * radius);

    printf("Volume: %.2f\n", volume);

    return 0;
}

