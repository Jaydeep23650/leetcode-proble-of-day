class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();

        vector<int>t(n, 1), hash(n);

        sort(nums.begin(), nums.end());

        int ans = -1;
        int lastIdx = -1;


        for(int i = 0; i < n; i++){
            hash[i] = i;
            for(int prev = 0; prev < i; prev++){
                
                if(nums[i] % nums[prev] == 0 && 1 + t[prev] > t[i]){

                    t[i] = 1 + t[prev];
                    hash[i] = prev;
                }
            }
            
            if(t[i] > ans){
                ans = t[i];
                lastIdx = i;
            }
        }


        vector<int>temp;
        temp.push_back(nums[lastIdx]);

        while(hash[lastIdx] != lastIdx){
            lastIdx = hash[lastIdx];
            temp.push_back(nums[lastIdx]);
        }

        reverse(begin(temp), end(temp));

        return temp;
    }
};