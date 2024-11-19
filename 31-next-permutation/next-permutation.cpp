class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                for(int j=n-1;j>=i;j--){
                    if(nums[i-1]<nums[j]){
                        swap(nums[i-1],nums[j]);
                        sort(begin(nums)+i,end(nums));
                        return;
                    }
                }
            }
        }
           sort(begin(nums),end(nums));
    }
};