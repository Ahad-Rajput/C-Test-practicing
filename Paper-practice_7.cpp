#include <iostream>
using namespace std;

int x = 10;
void fun(){
    static int x = 0;
    cout << "Static x : " << x << endl;
    cout << "Global x : " << ::x << endl;
    x++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}