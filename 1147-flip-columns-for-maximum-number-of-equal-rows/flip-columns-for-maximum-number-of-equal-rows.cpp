class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int ans=0;
        int m=matrix[0].size();
        for(auto it:matrix){
            //make a vector just flip of original vector
            vector<int>v;
            for(auto i:it){
                v.push_back(1-i);
            }
            int count=0;
            //count all vector equal to original or flip vector
            for(auto s:matrix){ 
                if(s==it||v==s)count++;
            }
            ans=max(ans,count);
        }
       return ans;
    }
};