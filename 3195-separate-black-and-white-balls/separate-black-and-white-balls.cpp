class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0,count=0;
        // int count=0;
        int i=0,j=s.size()-1;
         for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                ans+=i;count++;
            }
         }
        count=(count*(count-1))/2;

        return ans-count;
    }
};