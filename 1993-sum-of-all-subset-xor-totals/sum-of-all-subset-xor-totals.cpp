class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size(),ans=0;
        n=pow(2,n);
        for(int i=0;i<n;i++){
            int k=i,count=0,xr=0;
            
            while(k){
                if(k%2==1){
                 xr=xr^nums[count];
                }
                count++;
                k=k/2;
            }
            ans+=xr;
        }
        return ans;
    }
};