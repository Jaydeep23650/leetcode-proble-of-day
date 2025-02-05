class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       if(s1==s2)return true;
       for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            string s=s1;
            swap(s[i],s[j]);
            if(s==s2)return true;
        }
       }
       return false;
    }
};