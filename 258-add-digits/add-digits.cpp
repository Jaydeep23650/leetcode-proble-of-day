class Solution {
public:
    int addDigits(int n) {
        if(n<10)return n;
        while(n){
            if(n<10)break;
            int sum=0;
            while(n){
              sum+=n%10;
              n=n/10;
            }
            n=sum;
        }
        return n;
    }
};