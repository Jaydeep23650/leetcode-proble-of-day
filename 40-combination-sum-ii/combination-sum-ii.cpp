class Solution {
public:

    void solve(vector<int>&candidates,int target,vector<int>&temp,vector<vector<int>>&ans,int start){
           if(target==0)ans.push_back(temp);
           for(int i=start;i<candidates.size();i++){
            if(i>start&&candidates[i]==candidates[i-1])continue;
            if(target<0)
            break;
             temp.push_back(candidates[i]);
             solve(candidates,target-candidates[i],temp,ans,i+1);
            //  target=target+candidates[i];
             temp.pop_back();
           }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        solve(candidates,target,temp,ans,0);
        return ans;
    }
};