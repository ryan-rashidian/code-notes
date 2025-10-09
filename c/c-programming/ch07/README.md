# Chapter 7: Basic Types

## 7.1: Integer Types

6 varying sizes of an integer in C:

- `short int`
- `unsigned short int`
- `int`
- `unsigned int`
- `long int`
- `unsigned long int`

Other combinations are synonyms

### Integer Constants

**Decimal** constants contains digits between 0 and 9,
must not begin with a zero.

- e.g. 15 255 32767

**Octal** constants contain only digits between 0 and 7,
must begin with a zero.

- e.g. 017 0377 077777

**Hexadecimal** constants contain digits between 0 and 9,
letters between a and f (upper or lower case), 
and always begin with 0x.

- e.g. 0xf 0xff 0x7fff

## 7.2: Floating Types

3 floating types:

- float - single precision floating-point
- double - double precision floating-point
- long double - extended precision floating-point

## 7.3: Character Types

`toupper()` - returns upper-case letter, from <ctype.h>
`putchar()` - writes a single character
`getchar()` - reads a single character

Idioms:

```
while (getchar() != '\n') // skips rest of line
while ((ch = getchar()) == ' ') // skips blanks
``` 

## 7.4: Type Conversion

For a computer to perform an arithmetic operation:

- operands must be the same size and stored in the same way

For arithmetic operations in C:

- basic types can be mixed
- C compiler may generate instructions that convert operands

This compiler conversion is called: **implicit conversion**
C also allow the programmer to perform: **explicit conversion**
Converting the narrower type to match is called: **promotion**

### Casting (explicit conversion)

`( type-name ) expression`

Specify the type to which the expression should be converted.

```
float quotient;
int dividend, divisor;

quotient = (float) divident / divisor;
```

- Operands are converted BEFORE the division

## 7.5: Type Definitions

Type definitions `typedef`

```
typedef int Bool;
```

- Using `typedef` to define `Bool` causes the compiler to add `Bool` to types
- The compiler will recognize it in a list of type names
- Makes the program more understandable if used well

```
typedef float Dollars;

Dollars cash_in, cash_out;
```

- example shows readability gains from proper usage

## 7.6: The `sizeof` Operator

`sizeof ( type-name )`

The `sizeof` operator determines how much memory is required to store a type

