class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
       sort(interval.begin(),interval.end());
       vector<vector<int>>ans;
       int n=interval.size();
       int i=0;
    while(i<n){
        int start=interval[i][0];
        int end=interval[i][1];
        int j=i+1;
        while(j<n&&end>=interval[j][0]){
           end=max(end,interval[j][1]);j++;
        }
        ans.push_back({start,end});
        i=j;
    }
   
   return ans;

    }
};