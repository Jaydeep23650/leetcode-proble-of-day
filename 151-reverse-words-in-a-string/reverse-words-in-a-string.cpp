class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            string s1="";
            if(s[i]!=' '){
                int j=i;
              while(j<s.size()&&s[j]!=' '){
                 s1+=s[j++];
              }
              ans=' '+s1+ans;
              i=j-1;
            }

        }
        // if(ans.back()==' ')
        return ans.substr(1);
    }
};