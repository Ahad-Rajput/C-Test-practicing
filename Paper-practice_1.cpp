#include <iostream>
using namespace std;

class Prac{
public:
    ~ Prac(){
        cout << "This is Destructor." << endl;
    }
    Prac(){
        cout << "This is Constructor." << endl;
    }

    void show(){
        cout << "Hello" << endl;
    }
};



int main()
{
    Prac p1;
    p1.show();
    return 0;
}

// So place doesn't matter in Constructor and Destructor.