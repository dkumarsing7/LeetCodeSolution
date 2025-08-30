class Solution {
public:
    bool isAlphanum(char ch){
        if (ch >= '0' and ch <= '9') return true;
        if (tolower(ch) >= 'a' and tolower(ch) <= 'z') return true;
        return false;
    }
    bool isPalindrome(string s) {
        int st = 0, e = s.size() - 1;
        while ( st <= e)  {
            if ( !isAlphanum(s[st]) ) {st++; continue;}
            if ( !isAlphanum(s[e]) ){ e--; continue;}
            if ( tolower(s[st]) != tolower(s[e])) return false; 
            st++; e--;
        }
        return true;
    }
};