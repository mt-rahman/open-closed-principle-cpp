#include "rectangle.h"
#include "square.h"
#include "circle.h"

int main() {
    Shape *pShape;

    // call rectangle method
    Rectangle rectangle;
    pShape = &rectangle;
    pShape->calculateArea();

    // call square method
    Square square;
    pShape = &square;
    pShape->calculateArea();

    // call circle method
    Circle circle;
    pShape = &circle;
    pShape->calculateArea(); // note that method call stays the same regardless of shape

    return 0;
}