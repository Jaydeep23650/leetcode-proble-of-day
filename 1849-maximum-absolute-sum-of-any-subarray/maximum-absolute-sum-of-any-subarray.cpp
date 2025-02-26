class Solution {
public:
     
    int maxAbsoluteSum(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;
        for(auto it:nums){
               if(sum<0)sum=0;
            sum+=it;
         
            ans=max(ans,sum);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=-nums[i];
        }
        sum=0;
        for(auto it:nums){
             if(sum<0)sum=0;
            sum+=it;
           
            ans=max(ans,sum);
        }
        return ans;
    }
};
