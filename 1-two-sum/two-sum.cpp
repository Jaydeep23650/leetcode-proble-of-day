class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>mp;
        for(int i=0;i<nums.size();i++){
             mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];
            if(mp[n]&&mp[n]!=i){
               return {i,mp[n]};
            }
        }
        return {};
    }
};