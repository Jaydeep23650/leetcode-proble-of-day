class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
       int ans=0,n=grid.size();
       for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
               set<int> s;
                s.insert(grid[i][j]);
                s.insert(grid[i][j + 1]);
                s.insert(grid[i][j + 2]);
                s.insert(grid[i + 1][j]);
                s.insert(grid[i + 1][j + 1]);
                s.insert(grid[i + 1][j + 2]);
                s.insert(grid[i + 2][j]);
                s.insert(grid[i + 2][j + 1]);
                s.insert(grid[i + 2][j + 2]);

                if(grid[i][j]+grid[i][j+1]+grid[i][j+2]!=15);
         else   if(grid[i+1][j]+grid[i+1][j+1]+grid[1+i][j+2]!=15);
         else   if(grid[2+i][j]+grid[2+i][j+1]+grid[2+i][j+2]!=15);

          else  if(grid[i][j]+grid[i+1][j]+grid[i+2][j]!=15);
          else  if(grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1]!=15);
          else  if(grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2]!=15);

           else if(grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]!=15);
          else  if(grid[i+2][j]+grid[i+1][j+1]+grid[i][j+2]!=15);
          else if(s.size()==9&&*(s.begin())!=0){ ans++;}
        }
       } 
       return ans;
    }
};