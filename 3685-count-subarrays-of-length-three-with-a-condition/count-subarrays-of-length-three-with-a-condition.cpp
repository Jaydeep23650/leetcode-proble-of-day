class Solution {
public:
    int countSubarrays(vector<int>& nums) {
          int ans=0;
          for(int i=0;i<nums.size();i++){
            int sum=0;
            if(i+3<=nums.size()){
           
              if((nums[i]+nums[i+2])*2==nums[i+1])ans++;
            }
          }
          return ans;
    }
};