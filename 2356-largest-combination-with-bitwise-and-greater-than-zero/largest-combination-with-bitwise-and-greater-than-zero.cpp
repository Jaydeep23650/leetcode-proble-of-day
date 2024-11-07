class Solution {
public:
    int largestCombination(vector<int>&a) {
      vector<int>v(100,0);
         for(auto it:a) {
            int count=0;
            int n=it;
            while(n){
                if(n%2!=0){
                    v[count]++;
                }
                count++;
                n=n/2;
            }
         } 
         int ans=0;
         for(auto i:v){
            ans=max(ans,i);
         }
         return ans;
    }
};