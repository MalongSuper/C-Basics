# C Programming - The Basics

A collection of **basic C programs** created for learning and practicing the fundamentals of C programming.

This repository focuses on small, easy-to-understand examples rather than advanced or high-level projects. It is intended to help beginners learn C syntax, programming logic, and problem-solving step by step.

## Basic C Syntax

### Hello World

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Input

Use `scanf()` to read values from the user.

```c
int age;

printf("Enter your age: ");
scanf("%d", &age);

printf("You are %d years old.\n", age);
```

Common format specifiers:

* `%d` — integer
* `%f` — float
* `%lf` — double
* `%c` — character
* `%s` — string

### If-Else

```c
if (age >= 18) {
    printf("Adult\n");
} else {
    printf("Minor\n");
}
```

Multiple conditions can be handled with `else if`:

```c
if (score >= 90) {
    printf("A\n");
} else if (score >= 80) {
    printf("B\n");
} else {
    printf("C\n");
}
```

### Loops

**For loop**

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

**While loop**

```c
int i = 0;

while (i < 5) {
    printf("%d\n", i);
    i++;
}
```

**Do-While loop**

```c
int i = 0;

do {
    printf("%d\n", i);
    i++;
} while (i < 5);
```

### Functions

Functions allow code to be organized into reusable blocks.

```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5);
    printf("%d\n", result);

    return 0;
}
```

### Arrays

C uses arrays to store multiple values of the same type.

```c
int numbers[5] = {10, 20, 30, 40, 50};

printf("%d\n", numbers[0]);
```

Arrays are indexed starting from `0`.

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", numbers[i]);
}
```

### Strings

Strings are represented as arrays of characters.

```c
char name[] = "Alice";

printf("Hello, %s!\n", name);
```

## Purpose

The goal of this repository is to provide a simple collection of examples for learning:

* C syntax
* Variables and data types
* Input and output
* Conditions
* Loops
* Functions
* Arrays and strings
* Basic programming logic
* Problem-solving

> **Learn the syntax, practice the logic, and build your programming fundamentals one program at a time.**
