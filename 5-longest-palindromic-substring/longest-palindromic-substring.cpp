class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";
        string t = "#";
        for (int i = 0; i < n; i++) {
            t.push_back(s[i]);
            t.push_back('#');
        }
        for (int i = 0; i < 2 * n; i++) {
            string temp = "";
            if (t[i] != '#') {
                temp.push_back(t[i]);
            }
            int k = i - 1;
            int j = i + 1;
            while (k >= 0 && j < 2 * n) {
                if (t[j] == t[k]) {
                    if (t[k] != '#') {
                        temp = t[k]+temp;
                    }
                    if (t[j] != '#') {
                        temp.push_back(t[j]);
                    }
                } else {
                    break;
                }
                k--;
                j++;
            }
            if (temp.size() > ans.size()) {
                ans = temp;
            }
        }
        return ans;
    }
};