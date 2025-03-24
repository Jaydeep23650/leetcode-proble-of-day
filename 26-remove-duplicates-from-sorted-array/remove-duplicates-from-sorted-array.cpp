class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      vector<int>ans;
       int temp=nums[0];
       set<int>s;
       for(int i=0;i<nums.size();i++){
          s.insert(nums[i]);
       }
       nums.clear();
       int i=0;
      for(auto it:s){
        nums.push_back(it);
    }
    return s.size();   
    }
   
  
};