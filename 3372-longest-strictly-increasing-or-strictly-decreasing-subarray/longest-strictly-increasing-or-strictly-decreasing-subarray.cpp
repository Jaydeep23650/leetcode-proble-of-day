class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int low=1,high=1,ans=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])low++;
            else low=1;
            if(nums[i]<nums[i+1])high++;
            else high=1;
            ans=max(ans,max(low,high));
        }
        return ans;
    }
};