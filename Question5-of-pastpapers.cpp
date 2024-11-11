// Write a program that inputs a year and find, whether it is leap year or not using if...else structure

#include <iostream>
using namespace std;

class leapyear{
private:
    int year;
public:
    leapyear(int y){
        year = y;
    }
    bool checking(){
        if (year % 400 == 0)
        {
            return true;    // Divisible by 400
        }
        else if (year % 100 == 0)
        {
            return false;   // Divisible by 100 but not 400
        }
        else if(year % 4 == 0)
        {
            return true;    // Divisible by 4 but not 100
        }
        else
        {
            return false;
        }
    }

    void show()
    {
        if(checking()){
            cout << year << " is a leap year.\n";
        }
        else{
            cout << year << " is not a leap year.\n";
        }
    }
};

int main()
{
    int year;
    cout << "Enter year : ";
    cin >> year;
    leapyear y1(year);
    y1.checking();
    y1.show();

    return 0;
}

