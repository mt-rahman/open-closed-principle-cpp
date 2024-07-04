#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

#ifndef SHAPE
#define SHAPE


class Shape {
private:
    float mArea;
    int mWidth, mHeight;
    int mShapeType;
    int mSide;
    int mRadius;

public:
    Shape(int shapeType) {
        mShapeType = shapeType;
    }

    void calculateArea() {
        /*
            If you want to add another shape, you would need to change the implementation of this method.
            This violates the open-closed principle.
        */

        // rectangle
        if (mShapeType == 1) {
            cout << "Enter Width of Rectangle: ";
            cin >> mWidth;

            cout << "Enter Height of Rectangle: ";
            cin >> mHeight;

            mArea = mHeight * mWidth;
            cout << "Area of Rectangle: " << mArea << "\n";
        }
        // square
        else if (mShapeType == 2) {
            cout << "Enter one side your of Square: ";
            cin >> mSide;

            mArea = mSide * mSide;
            cout << "Area of Square: " << mArea << "\n";
        }
        // circle
        else if (mShapeType == 3) {
            cout << "Enter the radius of your circle: ";
            cin >> mRadius;

            mArea = 3.14 * pow(mRadius, 2);
            cout << "Area of Circle: " << mArea << "\n";
        }
        else {
            cout << "No shape defined\n";
        }
    }

    ~Shape() {
        cout << "Shape Destuctor Call\n";
    }
};

#endif