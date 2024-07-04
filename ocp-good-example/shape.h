#include <fstream>
#include <iostream>
using namespace std;

#ifndef SHAPE
#define SHAPE

class Shape {
public:
    virtual void calculateArea() {
        /*
            Implementation of this method varies depending on each shape.
            If you want to add a new shape, you can add the implementation
            of this method in a new header file. This way, the already existing
            implementations stay unmodified.
            This satisfies the open-closed principle.
        */
        cout << "Area of your Shape\n";
    }

    ~Shape() {
        cout << "Shape Destuctor Call\n";
    }
};

#endif