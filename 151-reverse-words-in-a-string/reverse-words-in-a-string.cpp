class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stringstream ss(s);
        string t="";
        while(ss>> t){
            ans=" "+t+ans;
        }
        // cout<<ans;
        return ans.substr(1);
    }
};