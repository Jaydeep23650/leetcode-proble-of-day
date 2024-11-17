class Solution {
public:
    int shortestSubarray(vector<int>&arr, int k) {
        deque<pair<int,long long>>q;
        long long sum=0;
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum>=k)ans=min(ans,i+1);
             pair<int,int>curr={INT_MIN,INT_MIN};
             while(!q.empty()&&sum-q.front().second>=k){ 
                ans=min(ans,q.back().first-q.front().first+1);
                q.pop_front();
             }
             if(!q.empty()&&q.back().second-q.front().second>=k){ 
                ans=min(ans,q.back().first-q.front().first+1);
             }
             while(!q.empty()&&q.back().second>=sum){
                q.pop_back();
             }
             q.push_back({i,sum});

        }
        return ans==INT_MAX?-1:ans;
    }
};