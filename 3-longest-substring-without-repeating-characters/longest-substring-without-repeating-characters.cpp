class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int i=0,j=0,ans=0;
        while(j<s.size()){
            if(mp[s[j]]){
                while(mp[s[j]]){
                    auto it=mp.find(s[i]);
                    mp.erase(it);
                    i++;
                }
            }
            mp[s[j]]++;
            int r=mp.size();
            ans=max(ans,r);
            j++;
        }
        


        return   ans;
    }
};