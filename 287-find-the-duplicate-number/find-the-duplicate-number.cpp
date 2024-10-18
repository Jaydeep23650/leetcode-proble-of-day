class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int ans=0,sum=nums[0];
       ans=sum; 
       map<int,int>mp;
      for(auto it:nums){
         if(mp[it])return it;
         mp[it]++;
        
      }
     
      return 0;
    }
};