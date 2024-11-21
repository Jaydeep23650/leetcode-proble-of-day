class Solution {
public:
   string countAndSay(string s){
        string ans="";
        int i=0;
        while(s.size()>i){
            int count=0,j=0;
            for(j=i;j<s.size();j++){
                if(s[i]==s[j])count++;
                else break;
            }
            if(count!=0)ans+=to_string(count)+s[i];
            i=j;
        }
        return ans;
    }
    string countAndSay(int n) {
        string s="1";
        n--;
       while(n--){
         s=countAndSay(s);
       }

        return s;
    }
};