#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,4,2,1};
    int result = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        result ^= arr[i];
    }
    
    cout << "Result : " << result << endl;
}