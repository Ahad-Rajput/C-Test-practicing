#include <iostream>
using namespace std;

class A{
public:
    virtual void show(){
        cout << "Base Class..." << endl;
    }
};

class B: public A{
public:

};

int main()
{
    A* a;
    a = new B();
    a->show();
    return 0;
}