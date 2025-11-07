/* 
 *   File: ch10_proj_01.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-06
 *  Brief: Chapter 10 Project 1 - Modify stack
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);


int main(void)
{
    char ch;

    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n')
        if (ch == ')') {
            if (pop() != '(') {
                printf("Parentheses/braces are not nested properly");
                return 0;
            }
        }
        else if (ch == '}') {
            if (pop() != '{') {
                printf("Parentheses/braces are not nested properly");
                return 0;
            }
        }
        else
            push(ch);

    if (is_empty())
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are NOT nested properly\n");

    return 0;
}


void make_empty(void)
{
    top = 0;
}


bool is_empty(void)
{
    return top == 0;
}


bool is_full(void)
{
    return top == STACK_SIZE;
}


void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}


char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];

    exit(0);
}


void stack_overflow(void)
{
    printf("Stack overflow");
    exit(EXIT_FAILURE);
}


void stack_underflow(void)
{
    printf("Parentheses/braces are nested properly");
}

