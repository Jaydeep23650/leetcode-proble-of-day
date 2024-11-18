class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Ensure mid is even
            if (mid % 2 == 1) {
                mid--; // Make mid even
            }

            // Check if the pair is valid
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2; // Move to the right half
            } else {
                right = mid; // Move to the left half
            }
        }

        // left should be pointing to the single element
        return nums[left];
    }
};