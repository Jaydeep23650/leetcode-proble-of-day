class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(k>=a.size())return {};
                ans[i][j]=a[k++];
            }
        }
        if(k<a.size())return {};
        return ans;
    }
};