// Write a class employee that contains attributes of employee id and his scale. The class contains member functions to input and show the attribute. Write a child class manager that inherits employee class. The child class has attributes of manager id and his department. It also contains the member functions to input and shows its attributes.

#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    int employee_id, scale;
public:
    void in(){
        cout << "Enter employee id : ";
        cin >> employee_id;
        cout << "Enter employee scale : ";
        cin >> scale;
    }
    void show() const{
        cout << "Employee ID : " << employee_id << endl;
        cout << "Employee Scale : " << employee_id << endl;
    }
};

class Manager : public Employee{
private:
    int manager_id;
    string department;
public:
    void in(){
        Employee::in();
        cout << "Enter manager id : ";
        cin >> manager_id;
        cout << "Enter department : ";
        cin.ignore();
        getline(cin, department);
    }
    void show() const{
        Employee::show();
        cout << "Manager ID : " << manager_id << endl;
        cout << "Manager Department : " << department << endl;
    }
};

int main()
{
    Manager person1;
    person1.in();
    person1.show();
    return 0;
}