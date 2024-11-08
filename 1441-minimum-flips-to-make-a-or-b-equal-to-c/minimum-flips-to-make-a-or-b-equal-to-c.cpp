class Solution {
public:
    int minFlips(int a, int b, int c) {
     vector<int>v1(32,0),v2(32,0),v3(32,0);
     int i=0;
     while(a||b||c){
        v1[i]=(a%2);
        v2[i]=(b%2);
        v3[i]=(c%2);
        i++;
        a/=2;
        b/=2;
        c/=2;
     }
     int ans=0;
      for(int i=0;i<32;i++){
        if((v1[i]||v2[i])!=v3[i]){
          if(v1[i]&v2[i])ans=ans+2;
          else ans++;
        }
      }
      return ans;

    }
};