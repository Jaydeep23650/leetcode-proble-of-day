class Solution {
public:
     
     void solveRow(vector<vector<int>>& grid,vector<int>&v,int n,int m){
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=grid[i][j]==1;
            }
            v[i]=sum;
        }
     }
   void solveCol(vector<vector<int>>& grid,vector<int>&v,int n,int m){
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=grid[j][i]==1;
            }
            v[i]=sum;
        }
     }


    int countServers(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       vector<int>row(n,0),col(m,0); 
       solveCol(grid,col,n,m);
       solveRow(grid,row,n,m);
       int ans=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]){
              if(row[i]>1||col[j]>1){
                ans++;
              }
            }
         }
       }
       return ans;
    }
};