#include <iostream>
using namespace std;

class Parent {
public:
    void helloFromParent() {
        cout << "Hello from PARENT METHOD" << endl;
    }

    virtual void helloVirtual() {
        cout << "Hello from PARENT METHOD" << endl;
    }
};

class FirstChild : public Parent {
public:
    virtual void helloVirtual() {
        cout << "Hello from FIRST CHILD METHOD" << endl;
    }
};

class SecondChild : public Parent {
public:
    virtual void helloVirtual() {
        cout << "Hello from SECOND CHILD METHOD" << endl;
    }
};

int main() {
    // case 1: calls methods of parent class
    Parent parentInstance;
    parentInstance.helloFromParent();
    parentInstance.helloVirtual();

    // case 2: calls method of parent class due to inheritance
    FirstChild firstChildInstance;
    firstChildInstance.helloFromParent();

    SecondChild secondChildInstance;
    secondChildInstance.helloFromParent();

    // case 3: overrides helloVirtual method of parent class
    firstChildInstance.helloVirtual();
    secondChildInstance.helloVirtual();

    // case 4: calls helloVirtual method of child class using parent class pointer
    Parent *pParentPointer;
    pParentPointer = &firstChildInstance;
    pParentPointer->helloVirtual();
    pParentPointer = &secondChildInstance;
    pParentPointer->helloVirtual(); // note that method call stays the same, but implementation is different depending on instance

    return 0;
}