#include<bits/stdc++.h>
class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& q) {
        int n=items.size();
        sort(items.begin(),items.end());
        vector<int>a(n,0);
        vector<int>ans(q.size());
        a[0]=items[0][1];
        
        for(int i=1;i<n;i++){
            a[i]=max(items[i][1],a[i-1]);
        }

        for(int i=0;i<q.size();i++){
            auto it = std::upper_bound(items.begin(), items.end(), std::vector<int>{q[i], INT_MAX});
           
             if(it==items.begin())ans[i]=0;
             else{
            int idx=distance(items.begin(),it)-1;
            ans[i]=a[idx];
            }
        }
        

        return ans;
    }
};