class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         vector<pair<int,int>>v;
         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
         }
         int m=matrix.size();
         int n=matrix[0].size();
         for(auto it:v){
               int i=it.first;
               int j=it.second;
               for(int x=0;x<n;x++){
                  matrix[i][x]=0;
               }
               for(int x=0;x<m;x++){
                  matrix[x][j]=0;
               }
         }
        //  return
    }
};