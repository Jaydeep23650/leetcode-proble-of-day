class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(begin(nums),end(nums));
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1&&nums[j]==nums[j-1])continue;
                int left=j+1,right=n-1;
                while(right>left){
                  long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                  if(sum==target){
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                    while(left<right&&nums[left]==nums[left+1])left++;
                     while(left<right&&nums[right]==nums[right-1]){right--;}
                     left++;right--;
                  }else if(sum>target)right--;
                  else left++;
                }

            }
        }
        return ans;
    }
};