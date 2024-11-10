class Solution {
public:

    void update(vector<int>&v,int n,int a){
        for(int i=0;i<32;i++){
            if((n>>i)&1){
                v[i]+=a;
            }
        }
    }
    int  decimalnums(vector<int>&v){
        int num=0;
        for(int i=0;i<32;i++){
            if(v[i]>0){
                num|=1<<i;
            }
        }
        return num;
    }
   
    int minimumSubarrayLength(vector<int>& nums, int k) {
        vector<int>v(32,0);
        int i=0,j=0,ans=INT_MAX;
        while(j<nums.size()){
            update(v,nums[j],1);
            while(i<=j&&decimalnums(v)>=k){
                ans=min(ans,j-i+1);
                update(v,nums[i],-1);
                i++;
            }
            j++;
        }
        return ans==INT_MAX?-1:ans;
    }
};