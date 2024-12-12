#include <iostream>
using namespace std;

class Base{
public:
    virtual void show() = 0; // Pure virtual function
    void display(){
        cout << "I'm Base Class" << endl;
    }
};

class Derived:public Base{
public:
    void show(){
        cout << "I'm Derived Class" << endl;
    }
};

// int main()
// {
//     Base* pr; Derived obj;
//     pr = &obj;
//     pr->display();
//     pr->show();

//     return 0;
// }

int main()
{
    Derived obj;
    Base& ref = obj;
    ref.show();
    ref.display();
}

// Derived class must have the override function in it (means show function must be created in Derived otherwise it doesn't work and throw error.)