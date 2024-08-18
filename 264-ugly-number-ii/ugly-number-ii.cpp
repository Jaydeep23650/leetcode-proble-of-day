class Solution {
public:
    int nthUglyNumber(int n) {
       vector<int>ans(n,0);
       ans[0]=1;
      
       int p1=0,p2=0,p3=0;
       for(int i=1;i<n;i++){
        int  num1=ans[p1]*2;
        int   num2=ans[p2]*3;
        int num3=ans[p3]*5;
         ans[i]=min(num1,min(num2,num3));
         
         if(num1==ans[i])p1++;
         if(num2==ans[i])p2++;
         if(num3==ans[i])p3++;

       }
       return ans.back();
    }
};