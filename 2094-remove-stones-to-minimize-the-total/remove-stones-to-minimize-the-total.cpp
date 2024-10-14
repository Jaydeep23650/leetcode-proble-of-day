class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        long long ans=0;
        priority_queue<int>q;
        for(auto it:piles){
            q.push(it);

        }
          while(k--){
            int r=q.top();
            r=r/2+(r%2!=0);
            q.pop();
            q.push(r);
          }
          while(!q.empty()){
            ans+=q.top();
            q.pop();

          }
          return ans;
    }
};