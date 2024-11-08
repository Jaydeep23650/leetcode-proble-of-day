class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int xr=0;
        vector<int>ans(nums.size(),0);
        for(auto it:nums){
            xr=xr^it;
        }
        int mask=(1<<maximumBit)-1;
        for(int i=nums.size()-1;i>=0;i--){
            int k=xr^mask;
           ans[nums.size()-i-1]=k;
           xr=xr^nums[i];
        }
        return ans;
    }
};