#include <iostream>
using namespace std;

class Prac{
    int a;
public:
    Prac(){
        a = 0;
    }
    void in(){
        cout << "Enter a : ";
        cin >> a;
    }
    void show(){
        cout << "a : " << a << endl;
    }
    Prac operator + (Prac p){
        Prac temp;
        temp.a = this->a + p.a;
        return temp;
    }
};

int main()
{
    Prac x, y, z;
    x.in();
    y.in();
    z = x+y;
    cout << "---------\n";
    z.show();
    return 0;
}
