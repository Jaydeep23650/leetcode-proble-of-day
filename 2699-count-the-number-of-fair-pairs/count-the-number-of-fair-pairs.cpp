class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            ans+=(upper_bound(nums.begin()+1+i,nums.end(),upper-nums[i])-nums.begin())-(lower_bound(nums.begin()+1+i,nums.end(),lower-nums[i])-nums.begin()
       ) ;}
        return ans;
    }
};