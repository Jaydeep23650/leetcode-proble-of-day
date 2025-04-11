class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            // cout<<s<<" ";
            if(s.size()%2==0){
                int l=0,r=0;
                 for(int k=0;k<s.size()/2;k++){
                     l+=s[k]-'0';
                     r+=s[s.size()-k-1]-'0';
                 }
                 if(l==r)ans++;
            }
        }
        return ans;
    }
};