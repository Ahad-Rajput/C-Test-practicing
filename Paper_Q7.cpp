// Write a class that contain an attribute name, a function to input and a function to display name. Create array of pointers in which each element refers to an object of the class.

#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
public:
    void input(){
        cout << "Enter name : ";
        cin >> name;
    }
    void show(){
        cout << "Your name : " << name << endl;
    }
};

int main()
{
    Person* ptr[4];
    for (int i = 0; i < 4; i++)
    {
        ptr[i]= new Person;
        ptr[i]->input();
    }
    for (int i = 0; i < 4; i++)
    {
        ptr[i]->show();
    }
    
    return 0;
}

 