#include "shape.h"

#ifndef SQUARE
#define SQUARE

class Square : public Shape {
private:
    int mSide;
    float mArea;

public:
    void calculateArea() {
        cout << "Enter one side your of Square: ";
        cin >> mSide;

        mArea = mSide * mSide;
        cout << "Area of Square: " << mArea << "\n";
    }

    ~Square()
    {
        cout << "Square Destuctor Call\n";
    }
};

#endif