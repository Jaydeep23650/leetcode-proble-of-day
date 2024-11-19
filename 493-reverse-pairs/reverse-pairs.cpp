class Solution {
public:
    int mergeAndCount(vector<int>& nums, int left, int mid, int right) {
        int count = 0;
        int j = mid + 1;

        // Count the reverse pairs
        for (int i = left; i <= mid; i++) {
            while (j <= right && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1)); // Count how many elements are there in the right half
        }

        // Merge step
        vector<int> temp;
        int l = left, r = mid + 1;
        while (l <= mid && r <= right) {
            if (nums[l] <= nums[r]) {
                temp.push_back(nums[l++]);
            } else {
                temp.push_back(nums[r++]);
            }
        }
        while (l <= mid) temp.push_back(nums[l++]);
        while (r <= right) temp.push_back(nums[r++]);

        for (int i = 0; i < temp.size(); i++) {
            nums[left + i] = temp[i]; // Copy back the sorted elements
        }

        return count;
    }

    int mergeSortAndCount(vector<int>& nums, int left, int right) {
        if (left >= right) return 0;

        int mid = (left + right) / 2;
        int count = mergeSortAndCount(nums, left, mid);
        count += mergeSortAndCount(nums, mid + 1, right);
        count += mergeAndCount(nums, left, mid, right);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSortAndCount(nums, 0, nums.size() - 1);
    }
};