class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        long long mod=1000000007;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                sum=sum%mod;
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end());
        long long ans=0;
        // for(auto it:v)cout<<it<<" ";
        for(int i=left;i<=right;i++){
            ans+=v[i-1];
            ans=ans%mod;
            // cout<<v[i]<<" ";
        }
        return ans;
    }
};