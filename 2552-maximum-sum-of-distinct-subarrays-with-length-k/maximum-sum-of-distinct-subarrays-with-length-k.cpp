class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
         map<int,int>mp;
        long long sum=0,ans=0;
        for(int i=0;i<k;i++){
           mp[nums[i]]++;
            sum+=nums[i];
        }
         if(mp.size()==k)
         ans=sum;
         for(int i=k;i<nums.size();i++){
            cout<<mp.size()<<endl;
            sum+=nums[i];
            sum-=nums[i-k];
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]<=0){
                auto it=mp.find(nums[i-k]);
                mp.erase(it);
            }
            if(mp.size()==k)ans=max(ans,sum);
         }
       

       return ans;
    }
};