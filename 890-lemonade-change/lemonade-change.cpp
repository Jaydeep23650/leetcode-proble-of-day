class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int>mp;
        for(auto it:bills){
            if(it==5){
                mp[5]++;
            }else if(it==10){
                if(mp[5]==0)return false;
                else{
                    mp[10]++;
                    mp[5]--;
                }
            }else if(it==20){
                if(mp[10]&&mp[5]){
                    mp[10]--;
                    mp[5]--;
                }else if(mp[5]>2){
                    mp[5]=mp[5]-3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};