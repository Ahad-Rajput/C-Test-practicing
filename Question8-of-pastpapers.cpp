// Write your class named DigitalC to implement a Digital clock. Have your data members and member functions to provide the functionlity of a Digital 12 hour Clock. A 12 hour clock is the time conversion that divides a 24 hour day into two periods AM and PM. Your newly created ditgital clock should be started from user provided time in the form (Hours, Minutes, Seconds, AM/PM), or from 00 : 00 : 00 AM if user is not providing any starting time. Hours, Minutes, Seconds will be provided as integer values and 1 will be provided for AM and 0 for PM. A clock should be capable of modifying its time with the time provided by user and should be capable of displaying its time in the following form :-  HH : MM : SS AM/PM   where HH = Hours, MM = Minutes, and SS = Seconds


#include <iostream>
using namespace std;

class DigitalC{
private:
    int hour, minute, second;
    bool isAM;
public:
    DigitalC(){
        hour = minute = second = 0;
        isAM = 0;
    }
};