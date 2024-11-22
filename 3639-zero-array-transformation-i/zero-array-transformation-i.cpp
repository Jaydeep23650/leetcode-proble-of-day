class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
       int n=nums.size();
        vector<int>v(n+2,0);
        for(auto i:queries){
             v[i[0]]++;
             v[i[1]+1]--;
        }
        for(int i=1;i<=n;i++){
            v[i]+=v[i-1];
        }
        for(int i=0;i<n;i++){
            if(v[i]<nums[i])return false;
        }
        return true;
    }
};