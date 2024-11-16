#include <vector>
#include <deque>
#include <algorithm>
#include <limits.h>

class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::vector<int> ans;
        std::deque<int> dq; // Deque to store indices of potential maximums

        for (int i = 0; i < nums.size(); ++i) {
            // Remove indices that are out of the current window
            if (!dq.empty() && dq.front() < i - k + 1) {
                dq.pop_front();
            }

            // Remove elements that are less than the current element
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // Add current index to the deque
            dq.push_back(i);

            // If we have filled at least one window, add the maximum to the result
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]); // The front of the deque is the maximum
            }
        }

        return ans;
    }
};