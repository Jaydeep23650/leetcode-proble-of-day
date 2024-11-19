class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.00000,temp=1.00000;
        int t=0;
        if(n<0){
            n=abs(n);
            t=1;
        }else if(n==0)return 1;
        ans=x;
        while(n>1){
            if(n&1){
                temp=temp*ans;
                n--;
            }else{
                ans=ans*ans;
                n=n/2;
            }
        }
        ans= temp*ans;
        cout<<ans<<endl;
        if(t)return 1/ans;
        return ans;
    }
};