class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        for(int i=0;i<k;i++){
          q.push({v[i].second,v[i].first});
        }
         while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
         }

        return ans;
    }
};