class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        for(auto it:nums){
            ans^=it;
        }
        return ans;
    }
};