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
        if(sum<=0||sum>6*n)return {};
        int r=sum/n;
        int t=sum%n;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(sum>0){
                ans[i]=r;
                sum=sum-r;
            }
            if(t>0){
                ans[i]++;
                t--;
            }
        }
        if(ans[n-1]==0)return {};
        return ans;
    }
};