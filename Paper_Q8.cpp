// Write a class with an integer data member, a function to input and a function to display it. Create an object of the class using pointer class its member function.

#include <iostream>
using namespace std;

class Test{
private:
    int n;
public:
    void input(){
        cout << "Enter number : ";
        cin >> n;
    }
    void display(){
        cout << ">> n : " << n << endl;
    }
};

int main()
{
    Test* ptr;
    ptr = new Test;
    ptr->input();
    ptr->display();

    return 0;
}