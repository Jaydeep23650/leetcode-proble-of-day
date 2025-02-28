class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int i=0;
        vector<vector<int>>ans;
        while(i<n){
            int start=intervals[i][0];
            int end=intervals[i][1];
            int j=i+1;
            while(j<n&&end>=intervals[j][0]){
                end=max(intervals[j][1],end);
                j++;
            }
            ans.push_back({start,end});
            i=j;
        }
        return ans;
    }
};