class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> cnt(k);
        for (auto x : arr) {
            cnt[((x % k) + k) % k]++;
        }
        if (cnt[0] % 2) return false;
        for (int i = 1; i < k / 2 + (k % 2); i++) { // ceil of k / 2
            if (cnt[i] != cnt[k-i]) return false;
        }
        return true;
    }
};