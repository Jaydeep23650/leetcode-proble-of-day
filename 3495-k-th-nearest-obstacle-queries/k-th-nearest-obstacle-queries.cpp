class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& q, int k) {
       int n=q.size();
        vector<int>ans(n,0);
    
        priority_queue<int>qt;
        for(int i=0;i<n;i++){
          qt.push((abs(q[i][0])+abs(q[i][1])));
          if(qt.size()>k){
           qt.pop();
          }
          if(qt.size()<k){
            ans[i]=-1;
          }else{
            
            ans[i]=qt.top();
          }
        }
      
    return ans;
    }
};