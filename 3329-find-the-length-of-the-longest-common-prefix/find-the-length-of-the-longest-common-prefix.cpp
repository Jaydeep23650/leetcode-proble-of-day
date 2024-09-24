class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<string,int>mp1,mp2;
        int ans=0;
        for(auto it:arr1){
            string s=to_string(it);
            for(int i=1;i<=s.size();i++){
                string s1=s.substr(0,i);
                mp1[s1]=i;
            }
        }
       for(auto it:arr2){
            string s=to_string(it);
            for(int i=1;i<=s.size();i++){
                string s1=s.substr(0,i);
                mp2[s1]=i;
            }
        }
        for(auto it:mp1){
            if(mp2[it.first]){
                ans=max(it.second,ans);
            }
        }
        
        return ans;
        
        
    }
};