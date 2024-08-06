class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mp;
        for(auto it:word)mp[it]++;

        priority_queue<pair<int,char>>q;
        for(auto it:mp){
            q.push({it.second,it.first});
        }
        int count=0,ans=0;
        while(!q.empty()){
            count++;
            int n=q.top().first;
            q.pop();
            if(count<=8){
                ans+=n;
            }else if(count>8&&count<17){
                ans+=n*2;
            }else if(count>16&&count<25){
                ans+=3*n;
            }else{
                ans+=n*4;
            }
        }
        return ans;
    }
};