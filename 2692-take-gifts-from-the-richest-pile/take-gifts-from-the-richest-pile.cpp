class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       long long ans=0;
       priority_queue<int>q;
       for(auto it:gifts){
        q.push(it);
       } 
       while(k--){
        int r=sqrt(q.top());
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