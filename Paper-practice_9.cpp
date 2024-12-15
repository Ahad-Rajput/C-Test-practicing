#include <iostream>
using namespace std;

class Emp{
private:    
    int id;
public:
    void setID(){
        cout << "Set id : ";
        cin >> id;
    }
    void getID(){
        cout << " Employee ID : "<< id << endl;
    }
};

int main()
{
    Emp arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "ID for " << (i+1) << " Employee" << endl;
        arr[i].setID();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << (i+1);
        arr[i].getID();
    }
    return 0;
}