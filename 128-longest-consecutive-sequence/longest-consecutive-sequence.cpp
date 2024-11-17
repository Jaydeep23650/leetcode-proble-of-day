class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;int cur=0,ans=0;
        while(i<nums.size()){
            int j=0;
            cur=nums[i];
            int count=0;
            for(j=i;j<nums.size();j++){
                if(cur==nums[j]){
                   cur++;count++;
                   ans=max(ans,count);
                }else if(cur-1==nums[j]){
                    continue;
                }else {i=j-1;break;}
            }
            i=j;
        }
        return ans;
    }
};