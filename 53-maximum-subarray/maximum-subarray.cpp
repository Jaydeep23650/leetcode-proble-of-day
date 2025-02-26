#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0]; // Initialize ans with the first element
        int sum = 0; // This will hold the current subarray sum
        
        for (auto it : nums) {
            sum += it; // Add the current element to the current sum
            ans = max(ans, sum); // Update the maximum found so far
            
            // If the current sum becomes negative, reset it to 0
            if (sum < 0) {
                sum = 0;
            }
        }
        
        return ans; // Return the maximum subarray sum
    }
};