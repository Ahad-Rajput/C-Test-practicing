// Write a program that overload increment operator to work with user defined object


#include <iostream>
using namespace std;

class Counter{
private:
    int n;
public:
    Counter(int initial = 0) : n(initial){}
    // Overload prefix increment operator (++obj)
    Counter& operator ++(){
        ++n;
        return *this;
    }
    // Overload postfix increment operator (obj++)
    Counter operator++(int) {
        Counter temp = *this; // Save the current state
        ++n; // Increment count
        return temp; // Return the old state
    }
    void show(){
        cout << "n : " << n << endl;
    }
};

int main()
{
     Counter c(5); // Initialize counter with 5

    cout << "Initial value:" << endl;
    c.show();

    cout << "Using prefix increment (++c):" << endl;
    ++c;
    c.show();

    cout << "Using postfix increment (c++):" << endl;
    c++;
    c.show();

    return 0;
}