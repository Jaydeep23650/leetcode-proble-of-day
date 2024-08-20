class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,s=prices[0];
        for(auto it:prices){
              if(it<s){
                s=it;
              }
              ans=max(ans,it-s);
        }
        return ans;
    }
};