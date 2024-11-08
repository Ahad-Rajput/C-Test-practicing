// Write a class to display a simple message on the screen whenever an object of that class is  created.

#include <iostream>
using namespace std;

class Simple{
public:
    Simple(){
        cout << "Happy Coding :)" << endl;
    }
};

int main()
{
    Simple a, b, c;
    return 0;
}