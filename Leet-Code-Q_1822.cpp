#include <iostream>
#include <vector>   // This header file is included to use the std::vector class, which is a dynamic array that can change size.

using namespace std;

int ArraySign(const vector<int>& nums){
    // Using a constant reference allows the function to access the vector without copying it
    int negative_nums = 0;
    for(auto i: nums){
        if (i == 0)
            return 0;
        else if (i < 0)
            negative_nums++;
    }
    if (negative_nums % 2 == 1)
        return -1;
    else
        return 1;
}

int main()
{
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    cout << ArraySign(nums) << endl; // No need to pass the size
    return 0;
}