class Solution {
public:

    bool solve(int sum,vector<int>& nums,int n,int i,vector<vector<int>>&dp){
        if(i>=n||sum<0)return false;
        if(sum==0)return true;
        if(dp[i][sum]!=-1)return dp[i][sum];
        bool take=solve(sum-nums[i],nums,n,i+1,dp);
        bool nontake=solve(sum,nums,n,i+1,dp);
        return dp[i][sum]= take||nontake;
    }
    bool canPartition(vector<int>& nums) {
        int   n=nums.size();
        int  sum=0;
        for(auto it:nums)sum+=it;
        if(sum&1)return false;
        vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
       return solve(sum/2,nums,n,0,dp);
        
          return false;
    }
};