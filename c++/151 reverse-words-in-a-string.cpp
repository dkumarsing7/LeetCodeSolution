class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.length();
        string output = "";
        for(int ch=0; ch<n; ch++){
            string word = "";
            while(s[ch] != ' ' && ch < n){
                word+=s[ch];ch++;
            }
            reverse(word.begin(), word.end());
            if(word.length()>0) output+=" " + word;

        }return output.substr(1);
    }
};