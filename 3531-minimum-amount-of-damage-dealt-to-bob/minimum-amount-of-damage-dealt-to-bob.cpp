class Solution {
public:

    // bool comp(pair<int,int>p1,pair<int,int>p2){
    //     if(p1.first==p2.first){
    //         return p1.second<p2.second;
    //     }else{
    //        return  p1.second>=p2.second;
    //     }
    // }
 static bool comp(pair<int,int> &a,pair<int,int>&b){
    double x= double(a.first)/double(a.second); // damage/time_req_to_kill 
    double y = double(b.first)/double(b.second);// damage/time_req_to_kill 
   return x>y;
}

    long long minDamage(int p, vector<int>& d, vector<int>& h) {
        vector<pair<int,int>>v;
        long long sum=0;
     for(int i=0;i<h.size();i++){
         int r=h[i]/p+(h[i]%p!=0);
         v.push_back({d[i],r});
         sum+=d[i];
     }
     long long ans=0;
      sort(v.begin(),v.end(),comp);
      for(auto it:v){
      ans+=sum*it.second;
      sum-=it.first;
      cout<<it.second<<" ";
      }

      return ans;
    }
};