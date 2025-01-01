class Solution {
public:
    int maxScore(string s) {
        vector<int>v1(s.size()),v2(s.size());
        int zero=0,one=0;
        if(s.size()==2){
            if(s[0]=='0'&&s[1]=='1'){
                return 2;
            }
            else if(s[0]=='1'&&s[1]=='0'){
                return 0;
            }else if(s[0]=='1'||s[0]=='0'){
                return 1;
            }
        }
        for(int i=0;i<s.size();i++){
           if(s[i]=='0'){
               zero++;

           }
           v1[i]=zero;
        }
        for(int i=0;i<s.size();i++){
           if(s[s.size()-1-i]=='1'){
               one++;

           }
           v2[s.size()-1-i]=one;
        }
        int mx=0;
        for(int i=1;i<s.size()-1;i++){
           mx=max(mx,v1[i]+v2[i]);
        }
        return mx;
        
    }
};