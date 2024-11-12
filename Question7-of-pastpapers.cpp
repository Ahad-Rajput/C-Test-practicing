// Write a C++ program to display the area of a rectangle by using a class named "Area" with two member functions. The first funciton named as "Dimension" will take the length and breadth of the rectangle as parameters and the second function named as "TakeArea" returns the area of the rectangle. Assign proper data types to the data members of the class. There should be two functions and one to input\get data and the other to display data. In main() create 3 objects of the class and then display the data of each object by calling corresponding functions.


#include <iostream>
using namespace std;

class Area{
private:
    float length, breadth;
public:
    void Dimension(float l ,float b){
        length = l;
        breadth = b;
    }
    float takeArea(){
        float ans = length * breadth;
        cout << "Area : " << ans << endl;
    }
};

int main()
{
    Area a1, a2, a3;
    a1.Dimension(5.1,2);
    a2.Dimension(5,8.2);
    a3.Dimension(9.6,2);
    cout << "Rectangle 1 \n";
    a1.takeArea();
    cout << "Rectangle 2 \n";
    a2.takeArea();
    cout << "Rectangle 3 \n";
    a3.takeArea();

    return 0;
}