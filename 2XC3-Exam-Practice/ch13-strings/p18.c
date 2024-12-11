#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

//void remove_filename(char *url);

// url points to a string containing a URL (Uniform Resource Locator) 
// that ends with a file name (such as "http://www.knking.com/index.html"). 
// The function should modify the string by removing the file name and the 
// preceding slash. (In this example, the result will be "http://www.knking.com/".) 
// Incorporate the "search for the end of a string" idiom into your function. Hint: 
// Have the function replace the last slash in the string by a null character.

void remove_filename(char *url) {
    char *last = NULL;
    for (char *p = url; *p != '\0'; p++) {
        if (*p == '/') {
            last = p;
        }
    }

    *(last + 1) = '\0';
}

void main() {
    char url[] = "http://www.knking.com/index.html";
    printf("%s\n", url);
    remove_filename(url);
    printf("%s\n", url);
}