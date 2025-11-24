/* 
 *   File: ch07_proj06.c
 * Author: Ryan Rashidian
 *   Date: 2025-09-08
 *  Brief: Chapter 7 Project 6 - Print sizeof
 */

#include <stdio.h>

int main(void)
{
    printf("size of int: %zu\n", sizeof(int));
    printf("size of short: %zu\n", sizeof(short));
    printf("size of long: %zu\n", sizeof(long));
    printf("size of float: %zu\n", sizeof(float));
    printf("size of double: %zu\n", sizeof(double));
    printf("size of long double: %zu\n", sizeof(long double));

    return 0;
}
