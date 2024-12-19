class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>&arr) {
        vector<int>dr(numCourses,0);
        if(arr.size()==0)return true;
        map<int,list<int>>adj;
        int count=0;
        for(auto it:arr){
            int u=it[0];
            int v=it[1];
            adj[v].push_back(u);
            dr[u]++;
        }
        queue<int>q;
        for(int i=0;i<dr.size();i++){
         if(dr[i]==0){q.push(i);
         count++;}
        }
        while(!q.empty()){
        int u=q.front();q.pop();
         for(auto v:adj[u]){
            dr[v]--;
             if(dr[v]==0){count++;
         q.push(v);
         }
         }
        
         
        }
        if(count!=numCourses)return false;
        return true;
    }
};