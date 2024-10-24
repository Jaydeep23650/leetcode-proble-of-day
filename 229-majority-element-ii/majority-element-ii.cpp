class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            int j=0,count=0;
              for(j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }else break;
              }
              if(count>nums.size()/3)ans.push_back(nums[i]);
              i=j-1;
        }
        
       return ans;
    }
};