class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {


    priority_queue<pair<int, int>,vector<pair<int, int>>, greater<>> pq;
    
    for (int i = 0; i < nums.size(); i++) {
        pq.push({nums[i], i});
    }
    
    for (int i = 0; i < k; i++) {
        int num = pq.top().first;
        int idx = pq.top().second;
        pq.pop();
        nums[idx] = num * multiplier;
        pq.push({nums[idx], idx});
    }
    
    return nums;
 
    }
};