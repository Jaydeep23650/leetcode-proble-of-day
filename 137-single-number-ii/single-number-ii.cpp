class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>ans(32,0);
        for(auto it:nums){
            for(int i=0;i<32;i++){
                ans[i]+=(it>>i)&1;
            }
        }
        int num=0;
        for(int i=0;i<32;i++){
            if(ans[i]%3!=0)
            num|=1<<i;
        }
        return num;
    }
};