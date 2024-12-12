#include <iostream>
using namespace std;

class yahoo
{
private:
    static int n;
public:
    yahoo(){
        n++;
    }
    void show(){
        cout << "n : " << n << endl;
    }
};

int yahoo::n = 0;


int main()
{
    yahoo x, y, z;
    x.show();
    y.show();
    z.show();
    return 0;
}