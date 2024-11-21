class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stringstream t(s);
        string temp;
        while(t>>temp){
            ans=" "+temp+ans;
        }
        
        return ans.substr(1);
    }
};