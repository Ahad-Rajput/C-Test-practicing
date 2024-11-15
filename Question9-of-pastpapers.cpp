// Object oriented languages allow the user to overload most of the operators so that the operators can work effectively in a specific application. How would you overload "+" operator in a class(say rectangle) os that we can add two objects of that class?

#include <iostream>
using namespace std;

class Rectangle{
private:
    float length, width;
public:
    void getData(){
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter width : ";
        cin >> width;
    }
    void display(){
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
    }
    Rectangle operator + (Rectangle a){
        Rectangle temp;
        temp.length = this->length + a.length; 
        temp.width = this->width + a.width; 
        return temp;
    }
};

int main()
{
    Rectangle r1, r2, z;
    r1.getData();
    r2.getData();
    z = r1 + r2;
    cout << "--------\n";
    z.display();

    return 0;
}