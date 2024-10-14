class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<int>q;
        for(auto it:nums){
            q.push(it);
        }
        while(k--){
           
            int r=q.top();
             ans+=r;
             q.pop();
             r=r/3+(r%3!=0);
             q.push(r);
        }
        return ans;
    }
};