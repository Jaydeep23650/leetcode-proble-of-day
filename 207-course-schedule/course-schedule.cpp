class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        map<int,vector<int>>adj;
        int n=numCourses;
        vector<int>n_dr(n,0);
        for(auto it:prerequisites){
            int a=it[0];
            int b=it[1];
            adj[b].push_back(a);
            n_dr[a]++;
        }
        int count=0;
        queue<int>q;
        for(int i=0;i<n_dr.size();i++){
            if(n_dr[i]==0){
                count++;
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                n_dr[it]--;
                if(n_dr[it]==0){
                    q.push(it);
                    count++;
                }
            }
        }
       if(count!=numCourses)return false;
       return true;

    }
};