# Chapter 10: Program Organization

## 10.1: Local Variables

A variable declared in the body of a function is said to be **local**

**Automatic storage duration**: the duration that variables are allocated

- storage is automatically allocated when the enclosing function is called
- storage is automatically deallocated when the function returns

**Block scope**: portion of program text where the variable can be referenced

### Static Local Variables

**Static storage duration**: permanent storage location in the program

- still has **block scope**
- place to 'hide' data from other functions, but retain it for future calls

### Parameters

Same properties:

- **automatic storage duration**
- **block scope**

Only difference from local variables is initialization

## 10.2: External Variables

**External variables**: variables declared outside of a function body,
also called **global variables**.

- **Static storage duration**: stored indefinitely
- **File scope**: visible from its declaration, to the end of the file

Convenient when many functions share a variable,
but in most cases, it's better to use parameters.

## 10.3: Blocks

**Block**: refers to compound statements or the body of a function

- function block <- compound statement (nested blocks)

Variable declarations in blocks are useful for:

- avoiding clutter
- reducing name conflicts

## 10.4 Scope

