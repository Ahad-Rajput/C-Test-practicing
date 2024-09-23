#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    void setData(){
        cout << "Enter brand of vehicle : ";
        getline(cin , make);
        cout << "Enter model of vehicle : ";
        getline(cin , model);
        cout << "Enter year : ";
        cin >> year;
        cin.ignore();
    }
    void getData() const{
        cout << "Vehicle's Brand : " << make << endl;
        cout << "Vehicle's Model : " << model << endl;
        cout << "Vehicle's Year : " << year << endl;
    }
};
class Car : public Vehicle{
private:
    int doors;
public:
    void setData(){
        Vehicle::setData();
        cout << "Enter no. of doors : ";
        cin >> doors;
        cin.ignore();
    }
    void getData() const{
        Vehicle::getData();
        cout << "No. of doors : " << doors << endl;
    }
};
class Truck : public Vehicle{
private:
    float payload_Capacity;
public:
    void setData(){
        Vehicle::setData();
        cout << "Enter payload capacity (in tons) : ";
        cin >> payload_Capacity;
        cin.ignore();
    }
    void getData() const{
        Vehicle::getData();
        cout << "Payload Capacity : " << payload_Capacity << " tons" << endl;
    }
};

int main()
{
    Car c1;
    Truck t1;
    cout << "\n-------------------------------------\n";
    cout << "\n\tEnter Data for Car\n\n";
    c1.setData();
    cout << "\n-------------------------------------\n";
    cout << "\n\tEnter Data for Truck\n\n";
    t1.setData();
    cout << "\n-------------------------------------\n";
    cout << "\n\tData for Car\n\n";
    c1.getData();
    cout << "\n-------------------------------------\n";
    cout << "\n\tData for Truck\n\n";
    t1.getData();
    cout << "\n-------------------------------------\n";
    return 0;
}