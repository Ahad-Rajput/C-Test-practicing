// Write a program that has two numbers in main(), passes these numbers to a function that performs integer addition. And Overload above function, that recevies 2 floating values from main() and performs floating addition.

#include <iostream>
using namespace std;

class Testing{
public:
    int addition(int a, int b){
        return a+b;
    }
    float addition(float a, float b){
        return a+b;
    }
};

int main()
{
    int a = 7, b = 8;
    float c = 3.3f, d = 5.4f;
    Testing t;
    int intAns = t.addition(a , b);
    cout << "Integer Addition : " << intAns << endl;
    cout << "---------------------------\n";
    float floatAns = t.addition(c , d);
    cout << "Float Addition : " << floatAns << endl;
    return 0;
}