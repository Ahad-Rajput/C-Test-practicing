#include <iostream>
#include <string>
using namespace std;

class Temp{
private:
    int day, month, year;
    string months[13] = {"","January", "Febrary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
public:
    Temp() : day(0), month(0), year(0){}
    void get_date(){
        cout << "\n\tEnter date\n";
        cout << ">> day : ";
        cin >> day;
        cout << ">> Month : ";
        cin >> month;
        cout << ">> year : ";
        cin >> year;
    }
    void display(){
        cout << day << " " << months[month] << " " << year << endl;
    }
};

int main()
{
    Temp t1;
    t1.get_date();
    t1.display();
    return 0;
}