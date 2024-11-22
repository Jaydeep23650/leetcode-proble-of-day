class Solution {
public:
    int coinChange(vector<int>& coins, int sum) {
        
    std::vector<int> dp(sum + 1, INT_MAX);
    dp[0] = 0; // Base case: 0 coins are needed to make sum 0

    for (int i = 1; i <= sum; ++i) {
        for (int coin : coins) {
            if (i - coin >= 0 && dp[i - coin] != INT_MAX) {
                dp[i] = std::min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[sum] == INT_MAX ? -1 : dp[sum];
}
    
};