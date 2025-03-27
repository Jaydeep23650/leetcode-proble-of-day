class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        map<int,int>mp1,mp2;
        for(auto it:nums){
            mp2[it]++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp1[nums[i]]++;
            mp2[nums[i]]--;
            if(mp2[nums[i]]<=0)mp2.erase(nums[i]);
            if(mp1[nums[i]]*2>i+1&&mp2[nums[i]]*2>nums.size()-1-i){
                return i;
            }
        }
        return -1;
    }
};