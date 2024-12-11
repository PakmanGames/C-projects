#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// (a)
// struct color make_color(int red, int green, int blue);
// Returns a color structure containing the specified red, 
// green, and blue values. If any argument is less than zero, 
// the corresponding member of the structure will contain zero 
// instead. If any argument is greater than 255, the corresponding 
// member of the structure will contain 255.

struct Color {
    int red;
    int blue;
    int green;
};

struct Color make_color(int red, int green, int blue) {
    if (red < 0) {
        red = 0;
    } else if (red > 255) {
        red = 255;
    }
    // same for the rest of colors;
    struct Color color;
    color.red = red;
    color.green = green;
    color.blue = blue;
    return color;
}

// (b)
// int getRed(struct color c);
// Returns the value of c's red member.

int getRed(struct Color c) {
    return c.red;
}

// (c)
// bool equal_color(struct color color1, struct color color2);
// Returns true if the corresponding members of color1 and color2 are equal.

bool equal_color(struct Color color1, struct Color color2) {
    if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue) {
        return true;
    }
    return false;
}

// (d)
// struct color brighter(struct color c);
// Returns a color structure that represents a brighter version of the color c. 
// The structure is identical to c, except that each member has been divided by 
// 0.7 (with the result truncated to an integer). However, there are three special cases:
// (1) If all members of c are zero, the function returns a color whose members all have the value 3.
// (2) If any member of c is greater than 0 but less than 3, it is replaced by 3 before the division by 0.7.
// (3) If dividing by 0.7 causes a member to exceed 255, it is reduced to 255.

struct Color brighter(struct Color c) {
    struct Color new;
    if (c.red == 0 && c.blue == 0 && c.green == 0) {
        new.red = 3;
        new.blue = 3;
        new.green = 3;
        return new;
    } else if (c.red < 3 && c.red > 0 && c.blue < 3 && c.blue > 0 && c.green < 3 && c.green > 0) {
        new.red = 3;
        new.blue = 3;
        new.green = 3;
    }

    new.red = (int) (c.red / 0.7);
    new.blue = (int) (c.blue / 0.7);
    new.green = (int) (c.green / 0.7);
    if (new.red > 255) {
        new.red = 255;
    }
    if (new.blue > 255) {
        new.blue = 255;
    }
    if (new.green > 255) {
        new.green = 255;
    }
    return new;
}

// (e)
// struct color darker(struct color c);
// Returns a color structure that represents a darker version of the color c. 
// The structure is identical to c, except that each member has been multiplied 
// by 0.7 (with the result truncated to an integer).

struct Color darker(struct Color c) {
    struct Color new;
    if (c.red == 0 && c.blue == 0 && c.green == 0) {
        new.red = 3;
        new.blue = 3;
        new.green = 3;
        return new;
    } else if (c.red < 3 && c.red > 0 && c.blue < 3 && c.blue > 0 && c.green < 3 && c.green > 0) {
        new.red = 3;
        new.blue = 3;
        new.green = 3;
    }

    new.red = (int) (c.red * 0.7);
    new.blue = (int) (c.blue * 0.7);
    new.green = (int) (c.green * 0.7);
    return new;
}

void main() {
    struct Color my_color = make_color(300, -20, 128);
    printf("Color: red=%d, green=%d, blue=%d\n", my_color.red, my_color.green, my_color.blue);
}