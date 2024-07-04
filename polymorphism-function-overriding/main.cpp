#include <iostream>
using namespace std;

class Parent {
public:
    void helloFromParent() {
        cout << "Hello from PARENT METHOD" << endl;
    }

    void helloOverride() {
        cout << "Hello from PARENT METHOD" << endl;
    }
};

class Child : public Parent {
public:
    void helloOverride() {
        cout << "Hello from CHILD METHOD" << endl;
    }
};

int main() {
    // case 1: calls methods of parent class
    Parent parentInstance;
    parentInstance.helloFromParent();
    parentInstance.helloOverride();

    // case 2: calls method of parent class due to inheritance
    Child childInstance;
    childInstance.helloFromParent();

    // case 3: overrides method of parent class
    childInstance.helloOverride();

    return 0;
}