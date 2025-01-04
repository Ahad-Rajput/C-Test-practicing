//Write a program that calculates the average of up to 100 English distances input by the user. Create an array of objects of the Distance class (created in class assignment). To calculate the average, you can borrow the add_dist() member function form that

#include <iostream>
using namespace std;

class Distance{
private:
    int feet;
    float inches;
public:
    // Default Constructor
    Distance(){
        feet = inches = 0;
    }
    // Parametrized Constructor
    Distance(int f, int in) : feet(f), inches(in){
        normalize();
    }
    // Normalize the distance
    void normalize(){
        if (inches >= 12.0)
        {
            feet += static_cast<int>(inches) / 12;
            inches = static_cast<float>(static_cast<int>(inches) % 12);
        }
    }
    // Member function to input distance
    void get_dis(){
        cout << "Enter feet : ";
        cin >> feet;
        cout << "Enter inches : ";
        cin >> inches;
        normalize();
    }
    // Member function to display distance
    void show_dist() const {
        cout << feet << "'-" << inches << '"';
    }
    // Member fuction to add two distances
    Distance add_dis(const Distance& d){
        Distance temp;
        temp.feet = feet + d.feet; 
        temp.inches = inches + d.inches;
        normalize();
        return temp; 
    }
    // Member function to divide a distance by an integer
    Distance divid(int divisor) const{
        float total_inches = feet*12 + inches;
        total_inches /= divisor;
       return Distance(static_cast<int>(total_inches / 12), static_cast<float>(static_cast<int>(total_inches) % 12));
    }
};

int main()
{
    const int Max_Distances = 100;
    Distance distances[Max_Distances];
    Distance total;

    int count;
    
    cout << "Enter the number of distances (up to 100) : ";
    cin >> count;

    if (count < 1 || count > Max_Distances)
    {
        cout << "Invalid  number of distances!" << endl;
        return 1;
    }
    // Input distances
    for (int i = 0; i < count; i++)
    {
        cout << ">>Enter distance " << i+1 << endl;
        distances[i].get_dis();
        total = total.add_dis(distances[i]);
    }
    // Calculate average
    Distance average = total.divid(count);
    
    // Display results
    cout << "\nThe total distance is ";
    total.show_dist();

    cout << "\nThe average is " << endl;
    average.show_dist();

    return 0;
}