class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
    int count=0;
    long long ans=0;
    int mn=INT_MAX;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
            if(matrix[i][j]<0)count++;
            mn=min(mn,abs(matrix[i][j]));
            ans+=abs(matrix[i][j]);
        }
      }
      if(count%2==0)return ans;
      return ans-2*mn;
    }
};