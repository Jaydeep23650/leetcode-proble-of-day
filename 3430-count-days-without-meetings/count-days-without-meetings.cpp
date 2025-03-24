class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int start=meetings[0][0],end=meetings[0][1];
        int ans=0,n=meetings.size();
        // check how many days left in begining
        if(start>1&&days>start)ans+=start-1;
        for(int i=1;i<n;i++){

            if(days<=end)break;
            // check skip day
            if(meetings[i][0]>end){
                ans+=meetings[i][0]-(1+end);
            }
            
            end=max(end,meetings[i][1]);
        }
         // 
        if(days>end)ans+=days-end;
       return ans;





    }
};