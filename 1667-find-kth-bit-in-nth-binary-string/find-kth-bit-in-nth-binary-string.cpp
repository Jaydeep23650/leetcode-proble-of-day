class Solution {
public:
     string reverse1(string &s){
        string t="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1')t.push_back('0');
            else t.push_back('1');
        }
        // reverse(s.begin(),s.end());
        return t;
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