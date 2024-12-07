class Solution {
public:


     bool check(vector<int>& nums,int mid, int maxOperations){
        int count=0;
        for(auto it:nums){
            count+=it/mid-(it%mid==0);
            if(count> maxOperations)return false;
        }
        if(count> maxOperations)return false;
        return true;
     }
    int minimumSize(vector<int>& nums, int maxOperations) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int high=nums[n-1];
        int low=1,ans=nums[n-1];
        while(high>=low){
            int mid=(high+low)/2;
            if(check(nums,mid,maxOperations)){
                ans=(mid);
                high=mid-1;
            }else{
               low= mid+1;
            }
        }
       return ans;
    }
};