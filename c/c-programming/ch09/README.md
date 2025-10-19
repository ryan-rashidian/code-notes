# Chapter 9: Functions

## 9.1: Defining and Calling Functions

Return type of a function is `int` by default

Basic syntax:
```
return-type function-name ( parameters )
{
    declarations
    statements
}
```

- Functions may not return arrays

## 9.2: Function Declarations

C doesn't require that the definition of a function precede its call.
Compiler creates an **implicit declaration** of the function.

Use a **function declaration**:

```
return-type function-name ( parameters ) ;
```

- provides the compiler with a glimpse of a function defined later.
- function declarations of this type are also called **function prototypes**
- a function prototype doesn't need to specify name of args, only type

## 9.3: Arguments

**Parameter**: appears in function definitions; dummy names
**Argument:**: expressions that appear in function calls

In C, arguments are passed by value.
Each parameter behaves like a variable that matches the value of the argument.

C allows functions calls where arguments do not match parameter types.
Based on whether or not the compiler has seen a prototype.

- C will perform **default argument promotions** without a prototype.
- C will convert type to corresponding parameter with a prototype.

### Array Arguments

When a function parameter is a one-dimensional array,
the length of the array can be left unspecified:

```
int f(int a[]) // no length specified
```

If the function needs to know the length of a, create a seconds argument:

```
int sum_array(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum;
}
```

## 9.4: The `return` Statement

A non-`void` function must use the return statement

```
return expression ;
```

The conditional operator can be used in the return expression

```
return n >= 0 ? n : 0;
```

## 9.5: Program Termination

The `exit` function, from `<stdlib.h>`, can be used to end the program.

- The argument passed to exit has the same meaning as the return value in main
- `EXIT_SUCCESS` and `EXIT_FAILURE` are macros for 0 and 1 respectively

## 9.6: Recursion

A function is recursive if it calls itself.

For example:

```
// compute n! recursively, using the formula n! = n * (n - 1)
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1)
}
```

