class Solution {
public:
     
    int maxAbsoluteSum(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;
        // first colculate highest sum using kadane
        for(auto it:nums){
               if(sum<0)sum=0;
            sum+=it;
         
            ans=max(ans,sum);
        }
        // for absolute -1 multiply each elements 
        for(int i=0;i<nums.size();i++){
            nums[i]=-nums[i];
        }

        sum=0;
        // first colculate highest sum using kadane .. this done for find lowest sum 
        for(auto it:nums){
             if(sum<0)sum=0;
            sum+=it;
           
            ans=max(ans,sum);
        }
        return ans;
    }
};
