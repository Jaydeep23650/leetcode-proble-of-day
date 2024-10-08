class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    int sz=0;
    KthLargest(int k, vector<int>& nums) {
        sz=k;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
            if(q.size()>k){
                q.pop();
            }
        }
        
    }
    
    int add(int val) {
        q.push(val);
        if(sz<q.size()){
            q.pop();
        }
          return q.top();
        
    }
  
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */