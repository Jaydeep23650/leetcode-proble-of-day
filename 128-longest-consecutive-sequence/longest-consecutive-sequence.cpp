class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,curr=0,i=0;
       while(i<nums.size()){
        int j=0,count=0,curr=nums[i];
           //count all consecutive element in array;
           for( j=i;j<nums.size();j++){
            if(curr==nums[j]){
                curr++;
                count++;
                ans=max(ans,count);
            }else if(curr-1==nums[j])continue;//skip all equal elements
            else{
                break;
            }
           }
            i=j;

          
       }
       return ans;
    }
};