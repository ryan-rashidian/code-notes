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



