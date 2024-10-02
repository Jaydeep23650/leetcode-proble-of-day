class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp(arr.begin(), arr.end());
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

        vector<int> ans;
        for(auto& it: arr){
            int rank = lower_bound(temp.begin(), temp.end(), it) - temp.begin() + 1;
            ans.push_back(rank);
        }
        return ans;
    }
};
auto speedup = [](){ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();