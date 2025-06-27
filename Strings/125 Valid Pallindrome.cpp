#include<iostream>
#include<string>
#include <cctype> 

using namespace std;

bool isAlphanum(char ch){
        if (ch >= '0' and ch <= '9') return true;
        if (tolower(ch) >= 'a' and tolower(ch) <= 'z') return true;
        return false;
    }
bool isPallindrome(string s){
    int st = 0, e = s.size() - 1;
    while ( st <= e)  {
        if ( !isAlphanum(s[st]) ) {st++; continue;}
        if ( !isAlphanum(s[e]) ){ e--; continue;}
        if ( tolower(s[st]) != tolower(s[e])) return false; 
        else {st++; e--;} 
    }return true;
}

int main(){
    string str = "A man, a plan, a canal: Panama";
    string str2 = "race a car";
    string str3 = " ";
    if (isPallindrome(str)) cout<<"paliindrome"<<endl; else  cout<<"not pallindrome"<<endl;
    if (isPallindrome(str2)) cout<<"paliindrome"<<endl; else  cout<<"not pallindrome"<<endl;
    if (isPallindrome(str3)) cout<<"paliindrome"<<endl; else  cout<<"not pallindrome"<<endl;
}