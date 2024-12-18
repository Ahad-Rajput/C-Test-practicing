//Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of gallons , and then displays the equivalent in cubic feet. (With OOP concept)

#include <iostream>
using namespace std;

class Convertor{
private:    
    const float Gallons_per_cubicFoot = 7.481;
public:
    float converting(float gallons){
        return gallons / Gallons_per_cubicFoot;
    }
};

int main()
{
    Convertor temp;
    float gallons;
    cout << "Enter no. of gallons : ";
    cin >> gallons;

    float cubic_feet = temp.converting(gallons);

    cout << gallons << " gallons is equivalent to " << cubic_feet << " cubic feet." << endl;

    return 0;
}