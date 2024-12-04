class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
      int i=0,j=0;
        int n=str1.size(),m=str2.size(),count=0;
        
        while(i<n&&j<m){
//              cout<<" i : "<<i<<" : "<<j<<" : "<<
                 
//                ((  (str1[i]-'a')+1)%(26))<<" : "<<str2[j]<<"\n";
            
            if(str1[i]==str2[j]){
                j++;i++;
            }else if(((str1[i]-'a')+1)%(26)==(str2[j]-'a')){
                cout<<" j : "<<j<<"\n";
                i++;j++;
            }else{
                i++;
            }
        }
        // cout<<" j : "<<j<<"\n";
        return (j>=m);
    }
};