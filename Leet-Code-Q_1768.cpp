#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1, word2, ans;
    word1 = "abcd";
    word2 = "pqrstv";
    ans = "";
    int A, B, i, j;
    i = 0; 
    j = 0;
    A = word1.size();  
    B = word2.size();

    // Merge characters in alternating order
    while ((i<A) && (j<B))
    {
        ans+=word1[i];
        ans+=word2[j];
        i++;
        j++;
    }

    // Append remaining characters from word1 (if any)
    while (i<A)
    {
        ans+=word1[i];
        i++;
    }

    // Append remaining characters from word2 (if any)
    while (j<B)
    {
        ans+=word2[j];
        j++;
    }
    
    cout << ans << endl;
    return 0;
}