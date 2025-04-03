class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
           auto r= lower_bound(v.begin(), v.end(),nums[i]);
           if(r==v.end()){
               v.push_back(nums[i]);
           }else{
               *r=nums[i];
           }

        }
         return v.size();
    }
};