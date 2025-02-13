class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       
        priority_queue<int,vector<int>,greater<int>>s;
        for(auto it:nums){
            if(it<k){
                s.push(it);
            }
        }
        int ans=0;
        while(s.size()>1){
            
          long long  int x=s.top();s.pop();
           long long  int y=s.top();s.pop();
         long long  int r=  min(x, y) * 2 + max(x, y);
            if(r<k){
                s.push(r);
            }
            ans++;
            
        }
        if(!s.empty())return ans+1;
        return ans;
        
    }
};