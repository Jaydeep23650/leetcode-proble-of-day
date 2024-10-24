class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            ans[i][n-1]=1;
        }
        for(int i=0;i<n;i++){
            ans[m-1][i]=1;
        }
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                ans[i][j]=ans[i+1][j]+ans[i][j+1];
            }
        }
        return ans[0][0];

    }
};