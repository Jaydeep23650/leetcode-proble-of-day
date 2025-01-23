class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[mat[i][j]]={i,j};
            }
        }
   
        vector<int>row(n,0),col(m,0);
        for(int i=0;i<arr.size();i++){
            auto it=mp[arr[i]];
            row[it.first]++;
            col[it.second]++;
            if(row[it.first]==m||col[it.second]==n)return i;
        }
        return n-1;
    }
};