class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
         vector<int>ans;
        // if(c.size()==1)return {};
        sort(c.begin(),c.end());
        map<int,int>mp;
        for(auto it:c)mp[it]++;
        for(auto it:c){
            if(mp[it]==0)continue;
            if(mp[it*2]>0){
                ans.push_back(it);
                mp[it]--;mp[it*2]--;
            }else return {};
        }

        if(ans.size()!=c.size()/2)return {};
        return ans;
    }
};