class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans=nums[0],sum=0;
        for(auto it:nums){
            sum+=it;
             ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
           
        }
        return ans;
    }
};