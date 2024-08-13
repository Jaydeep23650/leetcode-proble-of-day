class Solution {
public:

    void solve(int id,vector<int>& candidates,vector<int>&v,vector<vector<int>>&ans,int target){
      
      if(target==0){
        ans.push_back(v);
        return;
      }
      for(int i=id;i<candidates.size();i++){
          if(candidates[i]>target)continue;
           v.push_back(candidates[i]);
           solve(i,candidates,v,ans,target-candidates[i]);
           v.pop_back();

      }

    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // sort(begin(candidates),end(candidates));
        vector<int>v;
        vector<vector<int>>ans;
        solve(0,candidates,v,ans,target);
        return ans;
    }
};