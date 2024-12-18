//Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of gallons , and then displays the equivalent in cubic feet.

#include <iostream>
using namespace std;

int main()
{
    const float Gallons_per_cubicFoot = 7.481;
    float gallons, cubic_feet;

    cout << "Enter no. of gallons : ";
    cin >> gallons;

    // Calculate the equivalent cubic feet
    cubic_feet = gallons/Gallons_per_cubicFoot;

    // Display the result
    cout << gallons << " gallons is equivalent to " << cubic_feet << " cubic feet." << endl;
    
    return 0;
}