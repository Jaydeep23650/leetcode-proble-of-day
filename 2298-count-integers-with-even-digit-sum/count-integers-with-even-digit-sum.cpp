class Solution {
public:
    int countEven(int n) {
       int num=n,sum=0;
       while(num){
        sum+=num%10;
        num=num/10;
       }
       if(sum%2==0||n%2!=0)return n/2;
       return n/2-1;
    }
};