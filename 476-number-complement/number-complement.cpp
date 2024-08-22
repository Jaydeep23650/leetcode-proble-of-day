class Solution {
public:
    int findComplement(int num) {
       int ans=0;
       int count=0;
       while(num){
        if(num%2==0){
            ans+=pow(2,count);
          
        }
          count++;
        num=num/2;
       }
       return ans;
    }
};