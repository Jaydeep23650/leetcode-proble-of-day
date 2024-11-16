class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        int i=0;
        for( i=0;i<k-1;i++){
            if(i<nums.size()){
                mp[nums[i]]++;
            }
        }
        int j=0;
        while(i<nums.size()){
         mp[nums[i++]]++;
          if(mp.size()>0){
            auto it=prev(mp.end());
            ans.push_back(it->first);
          }
          mp[nums[j]]--;
          if(mp[nums[j]]<=0){
          auto it=mp.find(nums[j]);
          mp.erase(it);
          }
          j++;
         
        }
        return ans;
    }
};