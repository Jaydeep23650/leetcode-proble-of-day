class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=0;
        auto comp=[&](int sum,vector<int>v){
       sum+=v[row];
       if(row!=v.size()-row-1){
        sum+=v[v.size()-row-1];
       }
       row++;
       return sum;
        };
        int result=accumulate(mat.begin(),mat.end(),0,comp);
    return result;
    }
};