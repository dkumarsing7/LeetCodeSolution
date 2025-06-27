#include<iostream>
#include<string>
using namespace std;
bool isPallindrome(string str){
    int start = 0, end = str.size() - 1;
    while ( start < end)  {
        if (str[start] == str[end]) swap(str[start++], str[end--]);else return false;
    }return true;
}

int main(){
    string str = "racecar";
    string str2 = "madam";
    string str3 = "leetcode";
    if (isPallindrome(str)) cout<<str<<" is paliindrome"<<endl; else  cout<<str<<" is not pallindrome<<"<<endl;
    if (isPallindrome(str2)) cout<<str2<<" is paliindrome"<<endl; else  cout<<str2<<" is not pallindrome<<"<<endl;
    if (isPallindrome(str3)) cout<<str3<<" is paliindrome"<<endl; else  cout<<str3<<" is not pallindrome<<"<<endl;
}