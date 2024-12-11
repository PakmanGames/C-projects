#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Let f be the following function:

int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }

    return p1 - s;
}

// (a) What is the value of f("abcd", "babc")?
// (b) What is the value of f("abcd", "bcd")?
// (c) In general, what value does f return when passed two strings s and t?

// Finds the index of the character in s that isn't in t

void main() {
    printf("%d\n", f("abcd", "babc"));
}