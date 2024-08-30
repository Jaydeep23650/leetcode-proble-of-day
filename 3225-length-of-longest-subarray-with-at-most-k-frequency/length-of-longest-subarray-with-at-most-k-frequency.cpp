class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>mp;
        int i=0,j=0,ans=0,n=nums.size();
        while(j<n){
            mp[nums[j]]++;
            if(mp[nums[j]]<=k)ans=max(ans,j-i+1);
            if(mp[nums[j]]>k){
                while(mp[nums[j]]>k){
                    mp[nums[i++]]--;

                }
                 if(mp[nums[j]]<=k)ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};