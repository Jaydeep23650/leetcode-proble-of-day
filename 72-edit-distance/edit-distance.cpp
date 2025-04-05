class Solution {
public:

    int solve(string word1, string word2,int i,int j,vector<vector<int>>&dp){
        if(i>=word1.size())return word2.size()-j;
         if(j>=word2.size())return word1.size()-i;
         if(dp[i][j]!=-1)return dp[i][j];
        if(word1[i]==word2[j]) return dp[i][j]= solve(word1,word2,i+1,1+j,dp);
        int a=1+solve(word1,word2,i+1,j,dp);
        int b=1+solve(word1,word2,i,1+j,dp);
        int c=1+solve(word1,word2,i+1,1+j,dp);
        return dp[i][j] =min({a,b,c});
    }
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
       return  solve(word1,word2,0,0,dp);
    }
};