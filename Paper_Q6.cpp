#include <iostream>
using namespace std;

class Counter{
private:
    int count;
public:
    Counter(int initial = 0) : count(initial){}
    Counter& operator ++(){
        ++count;
        return *this;
    }
    void show(){
        cout << ">> Count : " << count << endl;
    }
};

int main()
{
    Counter c(1);
    cout << "Initial value " << endl;
    c.show();
    cout << "Using prefix operator (++c) :" << endl;
    ++c;
    c.show();
 
    return 0;
}