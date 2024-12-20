#include <iostream>
#include <string>
using namespace std;

class Date{
private:
    int day, month, year;
    string months[13] = {"","January", "Februray", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
public:
    Date() : day(0), month(0), year(0){}
    Date(int d, int m, int y) : day(d), month(m), year(y){}
    void display(){
        cout << day << "/" << month << "/" << year << endl;
        cout << months[month] << " " << day << ", 20" << year << endl;
        cout << day << " " << months[month] << " 20" << year << endl; 
    }
};

int main()
{
    Date d(16,1,15);
    d.display();
    return 0;
}