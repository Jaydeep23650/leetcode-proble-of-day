class Solution {
public:
   vector<vector<int>>ans;
   void solve(vector<int>& nums,vector<int>& temp,int start){
      if(start>nums.size())return ;
        ans.push_back(temp);
      for(int i=start;i<nums.size();i++){
        if(i>start&&nums[i]==nums[i-1])continue;
        temp.push_back(nums[i]);
        solve(nums,temp,i+1);
        temp.pop_back();
      }
    
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        solve(nums,temp,0);
        return ans;
    }
};