// Create a class Employee that uses a static member to keep track of the number of employees created.

#include <iostream>
using namespace std;

class Employee{
private:
    static int num;
public:
    Employee(){
        num++;
    }
    void show(){
        cout << "No. of Employee : " << num << endl;
    }
};
int Employee::num = 0;
int main()
{
    Employee e1, e2, e3, e4, e5;
    
    e1.show();
    e2.show();
    e3.show();
    e4.show();
    e5.show();

    return 0;
}