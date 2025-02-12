class Solution {
public:

    int solve(int num){
        int sum=0;
        while(num){
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        map<int,int>mp;
           int ans=0;
        for(auto it:nums){
          
          int n=solve(it);
          if(mp[n]){
            ans=max(ans,it+mp[n]);
            mp[n]=max(it,mp[n]);
          }else{
               mp[n]=it;
          }
        }
     
        
        return ans==0?-1:ans;
    }
};