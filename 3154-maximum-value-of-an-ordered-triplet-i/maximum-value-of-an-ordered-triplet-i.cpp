#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0; // Initialize to the smallest possible value
        int n = nums.size();
        
        // Iterate through all possible pairs (i, j)
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Calculate the difference nums[i] - nums[j]
                long long diff = nums[i] - nums[j];
                
                // Iterate through n, which must be greater than j
                for (int k = j + 1; k < n; k++) {
                    long long tripletValue = diff * nums[k];
                    ans = max(ans, tripletValue);
                }
            }
        }
        
        return ans;
    }
};