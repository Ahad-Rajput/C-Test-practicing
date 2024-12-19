// Write a program that count the number of object created of a particular class. The programs must be able to display the result even if no object is created so far.

#include <iostream>
using namespace std;

class temp{
private:
    static int n;
public:
    temp(){
        n++;
    }
    static void show(){
        cout << "You have created " << n << " so far." << endl;
    }
};
int temp::n = 0;

int main()
{
    temp::show();
    temp t1;
    t1.show();
    temp t2;
    t2.show();
    temp t3;
    t3.show();

    return 0;
}