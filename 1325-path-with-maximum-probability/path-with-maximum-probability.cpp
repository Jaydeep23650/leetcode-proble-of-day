class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>&s, int start, int end) {
  
      map<int,list<pair<int,double>>>mp;
      int r=edges.size();
       for(int i=0;i<r;i++){
          mp[edges[i][0]].push_back({edges[i][1],s[i]});
           mp[edges[i][1]].push_back({edges[i][0],s[i]});
       }
       priority_queue<pair<int,double>>q;
       q.push({start,1.0});
       vector<double>dist(n,0.0);
       dist[start]=1.0;
       while(!q.empty()){
           int node =q.top().first;
           double d=q.top().second;
           q.pop();
        //    if(node==end)d;
           for(auto v:mp[node]){
            int node2=v.first;
            double  w=v.second;
            if(dist[node2]<d*w){
                dist[node2]=d*w;
                q.push({node2,d*w});
            }
           }
       }
        
        // cout<<end;
        if(dist[end]>0)return dist[end];
        return 0.00000;
    }
};