class Solution {
public:
    int countOdds(int low, int high) {
        if(high%2!=0)high=high/2+1;
        else high=high/2;
        low =low/2;
        return high-low;
    }
};