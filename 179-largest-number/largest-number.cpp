class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(auto it:nums){
            v.push_back(to_string(it));
        }
        
        sort(v.begin(),v.end(),[](string &a,string &b){
            return a+b>b+a;
        });
        string ans="";
        if(v[0][0]=='0')return "0";
        for(auto it:v){
            ans+=it;
        }
        return ans;
    }
};