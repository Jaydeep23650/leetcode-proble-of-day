#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        const int mod= 1000000007;
        int ans = 0, n = arr.size();int total = 0,sum=0;

        // First pass: Calculate maximum subarray sum for a single array
        for (auto it : arr) {
            sum += it;
            total += it;
            if (sum < 0) {
                ans = max(ans, sum);
                sum = 0;
            }
            ans = max(ans, sum);
            ans=ans%mod;
        }

        // If k == 1, return the maximum subarray sum found
        if (k == 1) return ans;

        // Second pass: Calculate maximum subarray sum for two concatenated arrays
        int  sum2 = 0, ans2 = 0;
        for (int i = 0; i < 2 * n; i++) {
            sum2 += arr[i % n];
            if (sum2 < 0) {
                ans2 = max(ans2, sum2);
                sum2 = 0;
            }
            if(ans2<sum2)ans2=sum2;
            ans2=ans2%mod;
        }

        // If k == 2 or total sum is non-positive, return ans2
        if (k == 2 || total <= 0) return ans2;

        // For k > 2, calculate the total maximum sum
        long long totalContribution = (k - 2) * (long long)total % mod;
        return (ans2 + totalContribution) % mod;
    }
};