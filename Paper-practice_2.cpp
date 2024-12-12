#include <iostream>
#include <string>
using namespace std;

class Prac{
private:
    int emp_id;
public:
    string name;
    float salary;

    void setter(int id){
        emp_id = id;
    }
    void in(){
        cout << "Enter Name : ";
        cin.ignore();
        getline(cin, name);
    }
    void show(){
        cout << "Empolyee ID : " << emp_id << endl;
        cout << "Empolyee Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Prac emp1;
    emp1.salary = 10000;
    int id;
    cout << "Enter ID : ";
    cin >> id;
    emp1.in();
    emp1.setter(id);
    emp1.show();

    return 0;
}

//practicing data hiding, encapsulation, access specifier and getter, setter.