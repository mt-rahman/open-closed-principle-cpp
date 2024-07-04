#include "shape.h"

int main() {
    // rectangle
    Shape rectangle(1);
    rectangle.calculateArea();

    // square
    Shape square(2);
    square.calculateArea();

    // circle
    Shape circle(3);
    circle.calculateArea();

    return 0;
}