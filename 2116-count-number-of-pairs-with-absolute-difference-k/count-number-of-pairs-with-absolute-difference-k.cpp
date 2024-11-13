class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[abs(k+nums[i])]){
                ans+=mp[abs(k+nums[i])];
            }
          
        }
        return ans;
    }
};