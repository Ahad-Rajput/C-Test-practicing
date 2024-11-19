// Suppose the base class and the derived class each have a member function with the same signature. When you have a pointer to a base class object and call a function member throught the pointer, discuss what determines which function is actually called, the base class member function or derived class member function.


#include <iostream>
using namespace std;

class Base{
public:
    void display(){
        cout << "Base class is activated." << endl;
    }
};
class Derived : public Base{
public:
    void display(){
        cout << "Derived class is activated." << endl;
    }
};

int main() {
    Base *ptr;
    Derived d;

    ptr = &d; // Base class pointer points to Derived object
    ptr->display(); // Calls Base class display function (compile-time binding)

    return 0;
}
