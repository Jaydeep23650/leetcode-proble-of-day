class Solution {
public:
     int bitcount(int n){
        int count=0;
        while(n){
            if(1&n)count++;
            n=n/2;
        }
        return count;
     }
    vector<int> countBits(int n) {
        vector<int>ans;
        int i=0;
        while(i<=n){
           ans.push_back(bitcount(i++));
        }
        return ans;
    }
};