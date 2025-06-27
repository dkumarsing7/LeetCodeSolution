#include<iostream>
#include<string>
using namespace std;
string removeOccurrences(string s, string part) {
    int l = part.size();
    size_t pos = s.find(part);
    while (pos != string::npos){ s.erase(pos,l);pos = s.find(part); }
    return s;
}
int main(){
    cout<<removeOccurrences("daabcbaabcbc", "abc");cout<<endl;
    cout<<removeOccurrences("axxxxyyyyb", "xy");cout<<endl;
}