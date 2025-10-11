# Chapter 8: Arrays

## 8.1 One-Dimensional Arrays

Using macros to define the length of an array is good practice.

- Allows easy adjustment to length later

**sub-scripting | indexing** - accessing particular element with []

### Idioms

- array `a` of length `N`

```
for (i = 0; i < N; i++)
    a[i] = 0;           // clears a

for (i = 0; i < N; i++)
    scanf("%d", &a[1]); // reads data into a

for (i = 0; i < N; i++)
    sum += a[i];        // sums the elements of a
```

**array initializer** - list of constant expressions

```
int a[5] = {1, 2, 3, 4, 5};
```

If the initializer is shorter than the array:

- the remaining elements of the array are given the value 0
- can be used to easily initialize an array of all zeros

```
int a[10] = {0};
```

- if an initializer is present, the length can be omitted

**designated initializers**

```
int a[15] = {[2] = 29, [9] = 7, [14] = 48};
```

`sizeof` operator can be used to calculate length of an array.

```
for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    a[i] = 0;
```

- loop doesn't have to be modified later if `a` length changes
- slightly better than using a macro, (no macro name to remember)

```
#define SIZE(a) ((int) (sizeof(a) / sizeof(a[0])))

```
- Defining a macro can still be helpful for adding a parameter

## 8.2: Multidimensional Arrays

Multidimensional arrays play a lesser role in C than in other languages

- C provides arrays of pointers for multidimensional data

## 8.3: Variable-Length Arrays (VLA)

Length of a VLA is is computed when the program is executed, not compiled.

- Programmer does not have to pick a length, can be given by the user for e.g.

