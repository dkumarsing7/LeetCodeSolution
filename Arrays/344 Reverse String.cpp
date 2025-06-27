#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverseString(vector<char>& s)
{
    int st =0, end = s.size()-1;
    while(st<end) swap(s[st++], s[end--]);
    for (char ele : s)
    {
        cout << ele << " ";
    }
}
int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s); 
   
    return 0;
}