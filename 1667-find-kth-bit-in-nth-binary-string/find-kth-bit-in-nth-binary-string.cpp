class Solution {
public:
     string reverse1(string &s){
        int n=s.size();
        for(int i=0;i<n/2-(n%2!=0);i++){
            if(s[i]=='1')s[i]='0';
            else s[i]='1';
              if(s[n-1-i]=='1')s[n-1-i]='0';
            else s[n-1-i]='1';
            swap(s[i],s[n-1-i]);
        }
        if(n%2!=0){
            if(s[n/2]=='0')s[n/2]='1';
            else s[n/2]='0';
        }
        // reverse(s.begin(),s.end());
        return s;
     }
    char findKthBit(int n, int k) {
        string curr="0";
        n--;
        while(n--){
            
            curr=curr+"1"+reverse1(curr);
             if(curr.size()>k){
                curr=curr.substr(0,k);
            }
        }
        cout<<curr;
        return curr[k-1];
    }
};