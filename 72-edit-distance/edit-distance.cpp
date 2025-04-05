#include <algorithm> // For std::min

class Solution {
public:
    int solve(string& word1, string& word2, int i, int j,vector<vector<int>>&dp) {
        // Base cases: handle remaining characters
        if (i == word1.size()) 
            return word2.size() - j; // Insert remaining characters of word2
        if (j == word2.size()) 
            return word1.size() - i; // Delete remaining characters of word1
        if(dp[i][j]!=-1)return dp[i][j];
        // If characters match, move both pointers without cost
        if (word1[i] == word2[j]) 
            return solve(word1, word2, i + 1, j + 1,dp);
        
        // Explore all three operations and choose the minimum
        int insertOp = 1 + solve(word1, word2, i, j + 1,dp);     // Insert
        int deleteOp = 1 + solve(word1, word2, i + 1, j,dp);     // Delete
        int replaceOp = 1 + solve(word1, word2, i + 1, j + 1,dp); // Replace
        
        return dp[i][j]=min({insertOp, deleteOp, replaceOp});
    }
    
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(word1, word2, 0, 0,dp);
    }
};