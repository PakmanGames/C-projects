#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// (a) Write a function named capitalize that capitalizes 
// all letters in its argument. The argument will be a 
// null-terminated string containing arbitrary characters, 
// not just letters. Use array subscripting to access the 
// characters in the string. Hint: Use the toupper function 
// to convert each character to upper-case.

// (b) Rewrite a capitalize function, this time using pointer 
// arithmetic to access the characters in the string.

void capitalize(char *string) {
    while (*string != '\0') {
        *string = toupper(*string);
        string++;
    } 
}

void main() {
    char *string = "herllo world";
    printf("%d\n", *string);
    capitalize(string);
    printf("%d\n", *string);
}