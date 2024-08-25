class Solution {
public:
    int getLucky(string s, int k) {
        string ans="";
        for(auto it:s){
           ans+=to_string(it-'a'+1);
        }
        cout<<ans<<" ";
      
       
     
        while(k--){
             int num=0;
             for(auto it:ans){
                num+=it-'0';
             }
            ans=to_string(num);
        }
        int ans1=0;
        for(auto it:ans)ans1=10*ans1+(it-'0');
        return ans1;
    }
};