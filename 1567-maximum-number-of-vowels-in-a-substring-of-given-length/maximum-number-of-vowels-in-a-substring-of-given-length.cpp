class Solution {
public:
    int maxVowels(string s, int k) {
      int ans=0,ans2=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            ans++;
           
        }
         if((i>=k)&&(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'))ans--;
     ans2=max(ans,ans2);
      }  
      return ans2;
    }
};