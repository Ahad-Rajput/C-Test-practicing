// Write your class named DigitalC to implement a Digital clock. Have your data members and member functions to provide the functionlity of a Digital 12 hour Clock. A 12 hour clock is the time conversion that divides a 24 hour day into two periods AM and PM. Your newly created ditgital clock should be started from user provided time in the form (Hours, Minutes, Seconds, AM/PM), or from 00 : 00 : 00 AM if user is not providing any starting time. Hours, Minutes, Seconds will be provided as integer values and 1 will be provided for AM and 0 for PM. A clock should be capable of modifying its time with the time provided by user and should be capable of displaying its time in the following form :-  HH : MM : SS AM/PM   where HH = Hours, MM = Minutes, and SS = Seconds


#include <iostream>
#include <iomanip>
using namespace std;

class DigitalC{
private:
    int hour, minute, second;
    bool isAM;
    // Function to normalize time values in case seconds/minutes exceed 59
   void normalizeTime(){
    if (second >= 60)
    {
        minute += second/60;
        second %= 60;
    }
    if (minute >= 60)
    {
        hour += minute/60;
        minute %= 60;
    }
    if (hour >= 60)
    {
        isAM = !isAM;
        hour %= 12;
    }
    
    }
public:
    // Constructor with default parameters
    DigitalC(int h, int m, int s, bool am = true) : hour(h), minute(m), second(s), isAM(am){
        if (hour == 0)
        {
            hour = 12;
        }
        normalizeTime();
    }
    // Function to set the clock time
    void setTime(int h, int m, int s, bool am = true){
        hour = h;
        minute = m;
        second = s;
        isAM = am;
        normalizeTime();
    }
    // Function to display the time
    void displayTime(){
        cout << setw(2) << setfill('0') << hour << " : "
        << setw(2) << setfill('0') << minute << " : "
        << setw(2) << setfill('0') << second << "  "
        << (isAM ? "AM":"PM") << endl;
    }
};


int main()
{
    int h, m, s;
    bool am_pm;
    cout << "Enter time (HH MM SS AM/PM as 1 for AM or 0 for PM) : ";
    cin >> h >> m >> s >> am_pm;
    // Initialize clock based on user input, or default if invalid input
    DigitalC clock(h, m, s, am_pm == 1);

    cout << "Current Time: ";
    clock.displayTime();
    // Modify and display time
    cout << "\nSetting new time to 11:45:30 PM\n";
    clock.setTime(11,45,30,false);
    clock.displayTime();

    return 0;
}