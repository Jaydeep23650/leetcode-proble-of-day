class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int suf=1,pre=1,n=nums.size(),ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(suf==0)suf=1;
            if(pre==0)pre=1;
            pre=nums[i]*pre;
            suf=nums[n-1-i]*suf;
            ans=max({ans,pre,suf});

        }
        return ans;
    }
};