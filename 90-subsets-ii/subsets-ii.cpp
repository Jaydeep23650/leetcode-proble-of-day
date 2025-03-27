#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        backtrack(result, subset, nums, 0);
        return result;
    }

private:
    void backtrack(vector<vector<int>>& result, vector<int>& subset, 
                   vector<int>& nums, int start) {
        result.push_back(subset); // Add the current subset to the result

        for (int i = start; i < nums.size(); i++) {
            // Skip duplicates
            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }
            subset.push_back(nums[i]); // Include the current number
            backtrack(result, subset, nums, i + 1); // Move to the next index
            subset.pop_back(); // Backtrack
        }
    }
};