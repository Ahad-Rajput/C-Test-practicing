#include <iostream>
#include <string>

using namespace std;

// Base class : Employee
class Employee{
protected:
    string name;
    float salary;
public:
    // To set values
    void set_data(){
        cout << "Enter Employee's name : ";
        getline(cin,name);
        cout << "Enter Employee's salary : ";
        cin >> salary;
        cin.ignore();
    }
    // To get values 
    void get_data() const{
        cout << "Employee's Name : " << name << endl;
        cout << "Employee's Salary : " << salary << endl;
    }
};

// Derived class : FullTimeEmployee
class FullTimeEmployee : public Employee{
private:
    string benefits;
public:
    void set_data(){
        // Calling Employee's Function
        Employee::set_data();
        // Setting FullTimeEmployee data
        benefits = "Health insurance, retirement plan, paid vacation days, and life insurance";
    }
    void get_data() const{
        Employee::get_data();
        // Getting FullTimeEmployee data
        cout << "Benefit Package : " << benefits << endl;
    }
};

// Derived class : PartTimeEmployee
class PartTimeEmployee : public Employee{
private:
    int hours_worked;
public:
    void set_data(){
        Employee::set_data();
        cout << "Enter Employee's working hours : ";
        cin >> hours_worked;
        cin.ignore();
    }
    void get_data() const{
        Employee::get_data();
        cout << "Working Hours : " << hours_worked << endl;
    }
};

int main()
{
    FullTimeEmployee Emp1;
    PartTimeEmployee Emp2;

    cout << "\n\tEnter data for Full Time Employee\n\n";
    Emp1.set_data();

    cout << "\n\tEnter data for Part Time Employee\n\n";
    Emp2.set_data();

    cout << "\nData for Full Time Employee\n\n";
    Emp1.get_data();

    cout << "\nData for Part Time Employee\n\n";
    Emp2.get_data();

    return 0;
}
