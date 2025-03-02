class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=pow(2,nums.size());
      vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            vector<int>v;
            int j=0;
            int k=i;
            while(k){
                if(k%2){
                    v.push_back(nums[j]);
                }
                j++;
                k=k/2;
                
            }
            ans.push_back(v);
        }
        return ans;
    }
};