class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        int left = 0, right = 0;
        int count_a = 0, count_b = 0, count_c = 0;
        for (auto it : s) {
            if (it == 'a')
                count_a++;
            else if (it == 'b')
                count_b++;
            else
                count_c++;
        }
        int time = INT_MAX;
        if (count_a < k || count_b < k || count_c < k)
            return -1;
        while (right < n) {
            if (s[right] == 'a') {
                count_a--;
            } else if (s[right] == 'b') {
                count_b--;

            } else {
                count_c--;
            }
            if (count_a < k || count_b < k || count_c < k) {
                while (count_a < k || count_b < k || count_c < k) {
                    if (s[left] == 'a') {
                        count_a++;
                    } else if (s[left] == 'b') {
                        count_b++;

                    } else {
                        count_c++;
                    }
                    left++;
                    
                }
            }
            int t=count_a+count_b+count_c;
            time=min(time,t);
            right++;
        }
        return time==INT_MAX?-1:time;
    }
};