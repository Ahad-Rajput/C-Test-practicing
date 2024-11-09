// An object oriented approach provides facility of reuseability of eisting classes. One of the way to relate classes in a meaningful way is "has-a" relationship between classes. Write shortly what kind of relationship is this, An how it is implement in C++.

#include <iostream>
using namespace std;

class Base{
public:
    void display(){
        cout << "This is Base Class..." << endl;
    }
};

class Derived{
private:
    Base b1;
public:
    void display(){
        b1.display();
        cout << "This is Derived Class..." << endl;
    }
};

int main()
{
    Derived d1;
    d1.display();
    return 0;
}