class Solution {
public:
    string ExpandAroundCenter(string s, int left, int right) {
        while(left>=0 && right<s.size() && s[left] == s[right]){
            left--;right++;
        }return s.substr(left+1, right-left-1);
    }
    string longestPalindrome(string s) {
        string result = "";
        for(int i=0; i<s.size(); i++){
            string temp = ExpandAroundCenter(s, i , i);
            if (temp.size() > result.size()) result = temp;
            temp = ExpandAroundCenter(s, i , i+1);
            if (temp.size() > result.size()) result = temp;
        }
        return result;
    }
};