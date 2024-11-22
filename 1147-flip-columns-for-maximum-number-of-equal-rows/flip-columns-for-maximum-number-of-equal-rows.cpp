class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<string,int>mp;
        for(auto it:matrix){
            string s="";
            int temp=it[0];
            for(auto i:it){
                if(i==temp)s.push_back('s');
                else s.push_back('B');
            }
            mp[s]++;
        }
        int ans=0;
        for(auto it:mp){
            ans=max(ans,it.second);
        }
        return ans;
    }
};