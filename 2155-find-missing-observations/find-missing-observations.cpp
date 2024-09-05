class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        for(auto it:rolls){
            sum+=it;
        }
        int m=rolls.size();
        int total=mean*(m+n);
        sum=total-sum;
        
        int r=sum/n;
        int t=sum%n;
        if(r<=0||sum>n*6)return {};
        vector<int>ans(n,r);
        for(int i=0;i<t;i++){
            ans[i]++;
        }
        
        // if(ans[n-1]==0)return {};
        return ans;
    }
};