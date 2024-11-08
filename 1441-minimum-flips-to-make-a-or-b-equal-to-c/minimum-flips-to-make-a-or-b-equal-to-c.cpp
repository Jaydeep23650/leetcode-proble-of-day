class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int i=0;i<32;i++){
            if(c&1){
                if((a&1)|(b&1)){}
                else ans++;
                 a>>=1;
                b>>=1;
                c>>=1;
            }else{
                if(a&1)ans++;
                 if(b&1)ans++;
                a>>=1;
                b>>=1;
                c>>=1;
            }
        }
        return ans;
    }
};