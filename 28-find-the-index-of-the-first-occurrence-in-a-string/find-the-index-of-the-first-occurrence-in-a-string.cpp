class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        if(n>haystack.size())return -1;
        for(int i=0;i<=haystack.size()-n;i++){
             string s=haystack.substr(i,n);
             if(s==needle)return i;
        }
        return -1;
    }
};