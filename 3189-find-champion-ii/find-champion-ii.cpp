class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>v(n,0);

        for(auto it:edges){
           
           v[it[1]]++;
        }
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){count++;ans=i;}
        }
        if(count==1)return ans;
        return -1;
    }
};