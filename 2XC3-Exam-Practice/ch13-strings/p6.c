#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a function named censor that modifies a string 
// by replacing every occurrence of foo by xxx. For example, 
// the string "food fool" would become "xxxd xxxl". Make the 
// function as short as possible without sacrificing clarity.

void censor(char *string) {
    char *p = string;
    while ((p = strstr(p, "foo")) != NULL) {
        strncpy(p, "xxx", 3);
        p += 3;
    }
}

void main() {
    char food[] = "food fool foolish foo foo foo foo";
    printf("%s\n", food);
    censor(food);
    printf("%s\n", food);
}