class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>v(n+1,0);
        for(int i=0;i<trust.size();i++){
            v[trust[i][1]]++;
            // cout<<i<<" ";
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
            if(v[i]==n-1)ans= i;
        }int t=0;
        for(int i=0;i<trust.size();i++){
              if(ans==trust[i][0]) return -1;
        }
       return ans;
    }
};