class Solution {
public:
    bool isHappy(int n) {
       while(n!=1){
         if(n==2||n==3||n==4)return false;
         int num=0;
          while(n){
           num+=pow(n%10,2);
           n=n/10;
          }
          n=num;
       } 
       return true;
    }
};