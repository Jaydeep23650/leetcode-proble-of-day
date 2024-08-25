class Solution {
public:

    int solve(vector<int>& jb,int n, int d,int i, vector<vector<int>>&v){
        if(d==1){
            int mx=0;
            for(int k=i;k<n;k++){
              mx=max(mx,jb[k]);
            }
            return mx;
        }
        if(v[i][d]!=-1)return v[i][d];

        int mx=jb[i];
        int fresult=INT_MAX;
        for(int k=i;k<=n-d;k++){
            mx=max(mx,jb[k]);
            int result=mx+solve(jb,n,d-1,k+1,v);
            fresult=min(fresult,result);
            
        }

       return v[i][d]=fresult;;

    }


    int minDifficulty(vector<int>& jb, int d) {
        int n=jb.size();
        if(n<d)return -1;
        vector<vector<int>>v(301,vector<int>(11,-1));
        return solve(jb,n,d,0,v);
    }
};