#include <iostream>
#include <string>
using namespace std;

const float PI = 3.14159;

// Base class = Shape
class Shape{
protected:
    string color;
public:
    void setData(){
        cout << "Enter shape colour : ";
        getline(cin,color);
    };
    void getData() const{
        cout << "Colour of Shape = " << color << endl;
    }

};
// Derived class = Circle
class Circle : public Shape{
private:
    float radius;
public:
    void setData(){
        // Calling Base class function
        Shape::setData();
        // Setting Circle class data
        cout << "Enter radius of circle : ";
        cin >> radius;
        cin.ignore();
    }
    void getData() const{
        
        Shape::getData();

        cout << "Radius of Circle = " << radius << endl;
    }
    void Calculated_Area() const{
        float ans = PI*(radius*radius);
        cout << "Calculated Area for Circle = " << ans << endl;
    }
};
// Derived class = Rectangle
class Rectangle : public Shape{
private:
    float width;
    float height;
public:
    void setData(){
        Shape::setData();
        cout << "Enter width of rectangle : ";
        cin >> width;
        cout << "Enter height of rectangle : ";
        cin >> height;
        cin.ignore();
    }
    void getData() const{
        Shape::getData();
        cout << "Width of Rectangle = " << width << endl;
        cout << "Height of Rectangle = " << height << endl;
    }
    void Calculated_Area() const{
        float ans = width*height;
        cout << "Calculated_Area for Rectangle = " << ans << endl;
    }
};

int main()
{
    Circle c; Rectangle r;
    cout << "\n-------------------------------------\n";
    cout << "\n\tEnter Data for Circle\n\n";
    c.setData();
    cout << "\n-------------------------------------\n";
    cout << "\n\tEnter Data for Rectangle\n\n";
    r.setData();
    cout << "\n-------------------------------------\n";
    cout << "\n\tData for Circle\n\n";
    c.getData();
    c.Calculated_Area();
    cout << "\n-------------------------------------\n";
    cout << "\n\tData for Rectangle\n\n";
    r.getData();
    r.Calculated_Area();
    cout << "\n-------------------------------------\n";
    return 0; 
}