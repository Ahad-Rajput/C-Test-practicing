// Write a value Student having rollno and CGPA of Student. Write constructor with parameters. Overload the Insertion operator(<<). In main function using this operator to output the rollno and CGPA of an object of Student class.

#include <iostream>
using namespace std;

class Student{
private:
    int rollno;
    float cgpa;
public:
    Student(int rn, float cg) : rollno(rn), cgpa(cg){}

    friend ostream& operator<<(ostream& out, const Student& s){
        out << "Roll no. : " << s.rollno << " , CGPA : " << s.cgpa;
        return out;
    }
};

int main()
{
    Student student(101, 3.75);
    cout << student << endl;
    return 0;
}