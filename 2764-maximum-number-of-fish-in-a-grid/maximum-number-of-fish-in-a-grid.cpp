class Solution {
public:
   
   int bfs(vector<vector<int>>& grid,int x,int y, vector<vector<int>>&vis){
       queue<pair<int,int>>q;

       q.push({x,y});
       int sum=0;
       int dx[4]={0,1,0,-1};
       int dy[4]={1,0,-1,0};
       while(!q.empty()){
         auto [i,j]=q.front();
         sum+=grid[i][j];
         vis[i][j]=1;
         q.pop();
         for(int k=0;k<4;k++){
            int x1=i+dx[k];
            int y1=j+dy[k];
            if(x1>=0&&x1<grid.size()&&y1>=0&&y1<grid[0].size()&&vis[x1][y1]==0&&grid[x1][y1]){
                q.push({x1,y1});
                vis[x1][y1]=1;
            }
         }
         
       }
       return sum;
   }

    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
       vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]&&vis[i][j]==0){
                    ans=max(ans,bfs(grid,i,j,vis));
                }
            }
        }
        return ans;
    }
};