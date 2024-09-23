#include <iostream>
using namespace std;

class Base1 {
public:
    void show(){
        cout << "Hello, I'm Base class 1.\n";
    }
};

class Base2 {
public:
    void display(){
        cout << "Hello, I'm Base class 2.\n";
    }
};

class Derived : public Base1 , public Base2 {
public:
    void printing(){
        cout << "Hello, I'm Derived class.\n";
    }
};

int main()
{
    Derived obj;
    obj.show();
    obj.display();
    obj.printing();
}