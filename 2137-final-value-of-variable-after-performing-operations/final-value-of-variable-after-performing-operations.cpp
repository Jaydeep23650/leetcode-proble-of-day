class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(auto it:operations){
            if(it[0]=='-')ans--;
            else if(it[0]=='+')ans++;
            else if (it[2]=='-')ans--;
            else if(it[2]=='+')ans++;
        }
        return ans;
    }
};