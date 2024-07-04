#include "shape.h"

#ifndef RECTANGLE
#define RECTANGLE

class Rectangle : public Shape {
private:
    int mWidth, mHeight;
    float mArea;

public:
    void calculateArea() {
        cout << "Enter Width of Rectangle: ";
        cin >> mWidth;

        cout << "Enter Height of Rectangle: ";
        cin >> mHeight;

        mArea = mHeight * mWidth;
        cout << "Area of Rectangle: " << mArea << "\n";
    }
    
    ~Rectangle()
    {
        cout << "Rectangle Destuctor Call\n";
    }
};

#endif