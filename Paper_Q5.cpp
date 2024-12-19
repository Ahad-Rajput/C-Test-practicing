#include <iostream>
using namespace std;

class Counter{
private:
    int count;
public:
    Counter(int initial = 0) : count(initial){}
    Counter operator ++ (int){
        Counter temp;
        temp = *this;
        ++count;
        return temp;
    }
    void show(){
        cout << ">> Count : " << count << endl;
    }
};

int main()
{
    Counter c(5);
    cout << "Initial value : " << endl;
    c.show();

    cout << "Using postfix increment (c++) : " << endl;
    c++;
    c.show();

    return 0;
}