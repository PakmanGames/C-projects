#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a function named duplicate that uses dynamic storage allocation to create a copy
// of a string. For example, the call

// p = duplicate(str);

// would allocate space for a string of the same length as str. copy the contents of str into
// the new string, and return a pointer to it. Have duplicate return a null pointer if the
// memory allocation fails.

char *duplicate(char *str) {
    char *copy = malloc(strlen(str) + 1);
    if (copy == NULL) {
        return NULL;
    }

    strcpy(copy, str);
    return copy;
}

void main() {
    char *original = "Hello, World!";
    char *copy = duplicate(original);
    printf("copy: %s\n", copy);
}