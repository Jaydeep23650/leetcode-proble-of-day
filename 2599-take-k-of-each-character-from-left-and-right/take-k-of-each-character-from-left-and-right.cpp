class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        int left = 0, right = 0;
        int count_a = 0, count_b = 0, count_c = 0;
        for (auto it : s) {
            //store frequency of all charactors
            if (it == 'a')
                count_a++;
            else if (it == 'b')
                count_b++;
            else
                count_c++;
        }
        int time = INT_MAX;
        //check frequency of all charactor present in string or not 
        if (count_a < k || count_b < k || count_c < k)
            return -1;
        while (right < n) {
            //decrease frequency of charactors
            if (s[right] == 'a') {
                count_a--;
            } else if (s[right] == 'b') {
                count_b--;

            } else {
                count_c--;
            }
            //increase freeq. if less than k
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
        // count number of char should be remove
            int t=count_a+count_b+count_c;
            time=min(time,t);
            right++;
        }
        return time==INT_MAX?-1:time;
    }
};