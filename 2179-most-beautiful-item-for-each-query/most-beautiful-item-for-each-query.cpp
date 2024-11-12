// #include <vector>
// #include <algorithm>

class Solution {
public:
    std::vector<int> maximumBeauty(std::vector<std::vector<int>>& items, std::vector<int>& q) {
        // Sort items based on price
        std::sort(items.begin(), items.end());
        
        int n = items.size();
        std::vector<int> maxBeauty(n);
        
        // Precompute maximum beauty for each price
        maxBeauty[0] = items[0][1];
        for (int i = 1; i < n; i++) {
            maxBeauty[i] = std::max(maxBeauty[i - 1], items[i][1]);
        }
        
        std::vector<int> ans(q.size());
        
        for (int i = 0; i < q.size(); i++) {
            // Use upper_bound to find the rightmost item within the budget
            auto it = std::upper_bound(items.begin(), items.end(), std::vector<int>{q[i], INT_MAX});
            if (it == items.begin()) {
                ans[i] = 0; // No items can be bought
            } else {
                // Get the index of the last affordable item
                int idx = std::distance(items.begin(), it) - 1;
                ans[i] = maxBeauty[idx]; // Maximum beauty for the affordable items
            }
        }
        
        return ans;
    }
};