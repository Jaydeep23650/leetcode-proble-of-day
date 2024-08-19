class Solution {
public:
    
    int ans=0;
    void dfs(vector<int>mp[],int i,vector<int>&vis){
         queue<int>q;
         q.push(i);
         int node=0,edge=0;
         vis[i]++;
         while(!q.empty()){
            int d=q.front();
            q.pop();
            node++;
            cout<<d<<" "<<vis.size();
            for(auto v: mp[d]){
                if(vis[v]==0){
                    q.push(v);
                    vis[v]++;
                }
                edge++;
            }
         }
         if(edge==node*(node-1))ans++;
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
         vector<int>mp[n];
        vector<int>vis(n,0);
        for(auto it:edges){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(mp,i,vis);
            }
        }
        return ans;
    }
};