class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<long long >dist(n,1e18);
        vector<int>way(n,0);
        vector<pair<int,int>>adj[n];
        for(auto it:roads){
            adj[it[0]].push_back({it[2],it[1]});
             adj[it[1]].push_back({it[2],it[0]});
        }
        priority_queue<pair<long long ,int>,vector<pair<long long,int>>,greater<pair<long long ,int>>>q;
     
     q.push({0,0});
     dist[0]=0;way[0]=1;
     int mod=(int)(1e9+7);

     while(!q.empty()){
        int node =q.top().second;
        long long d=q.top().first;
        q.pop();

        for(auto v:adj[node]){
            int node2=v.second;
            long w=v.first;
            cout<<node2<<" ";
            if(w+d<dist[node2]){
                dist[node2]=d+w;
                q.push({w+d,node2});
                way[node2]=way[node]%mod;
            }else if(d+w==dist[node2]){
                way[node2]=(way[node]+way[node2])%mod;
            }
        }
     }


    return way[n-1]%mod;

    }
};