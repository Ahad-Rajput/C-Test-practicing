#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string phone_no; // Changed to string to handle large numbers
public:
    string name;
    string address;

    virtual void data() { // Virtual for polymorphism
        cout << "Enter Name : ";
        getline(cin, name);
        cout << "Enter Address : ";
        getline(cin, address);
    }

    virtual void show() const {
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
    }

    void setPhoneNumber() {
        cout << "Enter phone number : ";
        getline(cin, phone_no);
        
    }

    void displayPhoneNumber() const {
        cout << "Phone number : " << phone_no << endl;
    }
};

class Student : virtual public Person {
private:
    int std_id = 0; // Initialize to avoid garbage values
public:
    void data() override {
        cout << "Enter student ID : ";
        cin >> std_id;
        cin.ignore(); // Clear input buffer before calling Person::data
        Person::data();
    }

    void show() const override {
        cout << "Student ID : " << std_id << endl;
        Person::show();
        displayPhoneNumber();
    }
};

class Employee : public Student, virtual public Person {
private:
    int emp_id = 0; // Initialize to avoid garbage values
public:
    void data() override {
        cout << "Enter employee ID : ";
        cin >> emp_id;
        cin.ignore(); // Clear input buffer before calling Person::data
        Person::data();
    }

    void show() const override {
        cout << "Employee ID : " << emp_id << endl;
        Person::show();
        displayPhoneNumber();
    }
};

int main() {
    Student std1;
    Employee emp1;

    cout << "Enter Student Data:\n";
    std1.data();
    std1.setPhoneNumber();
    cout << "\n\n-----------------------------------------------\n\n";
    std1.show();

    cout << "\n\n-----------------------------------------------\n\n";

    cout << "Enter Employee Data:\n";
    emp1.data();
    emp1.setPhoneNumber();
    cout << "\n\n-----------------------------------------------\n\n";
    emp1.show();

    return 0;
}
