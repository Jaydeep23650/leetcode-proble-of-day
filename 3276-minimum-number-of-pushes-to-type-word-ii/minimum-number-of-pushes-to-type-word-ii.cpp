class Solution {
public:
    int minimumPushes(string word) {

        vector<int> v(26, 0);
        for (int it : word) {
            v[it - 'a']++;
        }
        int ans = 0;
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < v.size(); i++) {

            ans += v[i] * (i / 8 + 1);
        }

        return ans;
    }
};