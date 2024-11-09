class Solution {
public:
    long long minEnd(int n, int x) {
       long temp=x,ans=0;
       while(n--){
        temp=temp|x;
        ans=temp;
        temp++;
       }  
       return ans;
    }
};