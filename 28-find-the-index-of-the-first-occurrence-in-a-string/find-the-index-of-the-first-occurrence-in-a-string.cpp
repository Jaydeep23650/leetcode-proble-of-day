class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
       vector<int>lps(n,0);
       int i=1,length=0;
       while(i<n){
        if(needle[i]==needle[length]){
            length++;
            lps[i]=length;
            i++;
        }else{
            if(length!=0){
                length=lps[length-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
       }
    //    for(auto it:needle)cout<<it<<" ";
       i=0;
       int j=0,m=haystack.size();
       while (i < m) {
        if (needle[j] == haystack[i]) {
            i++;
            j++;
        }

        if (j == n) {
            cout << "Pattern found at index " << i - j << endl;
            return i-j;
            j = lps[j - 1]; // Continue to look for more matches
        } else if (i < m && needle[j] != haystack[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
       return -1;
    }
};