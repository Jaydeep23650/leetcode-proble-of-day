class Solution {
public:
      int v[1001][1001];
     bool solve(string &s,int i,int j){
        if(i>=j)return 1;
        if(v[i][j]!=-1)return v[i][j];
        if(s[i]==s[j]){
           return v[i][j]= solve(s,i+1,j-1);
        }
        return v[i][j]=0;
     }

    string longestPalindrome(string s) {
        memset(v,-1,sizeof(v));
        int mx=0,n=s.size(),t=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(s,i,j)==true){
                    if(mx<j-i+1){
                        mx=j-i+1;
                        t=i;
                    }
                }
            }
        }
        return s.substr(t,mx);
    }
};