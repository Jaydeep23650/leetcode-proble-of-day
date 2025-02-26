#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maxAbsoluteSum(std::vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;

        // First pass: Find maximum subarray sum
        for (int num : nums) {
            currentSum = std::max(currentSum + num, num);
            maxSum = std::max(maxSum, currentSum);
        }

        // Reset currentSum for the second pass
        currentSum = 0;

        // Second pass: Find maximum subarray sum of negated values
        for (int num : nums) {
            currentSum = std::max(currentSum - num, -num);
            maxSum = std::max(maxSum, currentSum);
        }

        return maxSum;
    }
};