#include "shape.h"
#include <cmath>

#ifndef CIRCLE
#define CIRCLE

class Circle : public Shape {
private:
    int mRadius;
    float mArea;

public:
    void calculateArea() {
        cout << "Enter the radius of your circle: ";
            cin >> mRadius;

            mArea = 3.14 * pow( mRadius, 2 );
            cout << "Area of Circle: " << mArea << "\n";
    }

    ~Circle()
    {
        cout << "Circle Destuctor Call\n";
    }
};

#endif