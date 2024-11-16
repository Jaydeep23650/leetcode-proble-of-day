class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n-k+1,-1);
        for(int i=0;i<=n-k;i++){
              bool track=true;
            for(int j=i;j<i+k-1;j++){
                if(nums[j]!=nums[j+1]-1){
                    track=false;
                    break;
                }
              
            }
              if(track!=false){
                     ans[i]=nums[i+k-1];
                }
                
        }
        return ans;
    }
};