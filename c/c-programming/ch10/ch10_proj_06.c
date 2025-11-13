/* 
 *   File: ch10_proj_06.c
 * Author: Ryan Rashidian
 *   Date: 2025-11-13
 *  Brief: Chapter 10 Project 6 - Reverse Polish Notation
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 100
#define OPERAND_SIZE 10
#define OPERATOR_SIZE 4

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

bool is_operand(char);
bool is_operator(char);
int map_operand(char);
int solve_expression(int, int, char);


int main(void)
{
    char ch;

    for (;;) {
        printf("Enter an RPN expression: ");
        for (;;) {
            scanf(" %c", &ch);
            if (ch == '=') {
                printf("Value of expression: %d\n", pop());
                make_empty();
                break;
            }
            else if (is_operator(ch)) {
                int op2 = pop(); int op1 = pop();
                push(solve_expression(op1, op2, ch));
            }
            else if (is_operand(ch))
                push(map_operand(ch));
            else
                return 0;
        }
    }
}


bool is_operand(char ch)
{
    char operands[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < OPERAND_SIZE; i++)
        if (operands[i] == ch)
            return true;

    return false;
}


bool is_operator(char ch)
{
    char operators[4] = {'+', '-', '*', '/'};

    for (int i = 0; i < OPERATOR_SIZE; i++)
        if (operators[i] == ch)
            return true;

    return false;
}


int map_operand(char operand)
{
    switch (operand) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default: exit(EXIT_FAILURE);
    }
}


int solve_expression(int op1, int op2, char operator)
{
    switch (operator) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        default: exit(EXIT_FAILURE);
    }
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


void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}


int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];

    exit(0);
}


void stack_overflow(void)
{
    printf("Expression is too complicated\n");
    exit(EXIT_FAILURE);
}


void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

