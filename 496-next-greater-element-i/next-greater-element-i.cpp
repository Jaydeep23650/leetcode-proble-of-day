class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            int t=nums1[i];
            int track=0;
           
            for(int j=0;j<nums2.size();j++){
                 if(nums2[j]==t){
                    track++;

                 }
                else if(nums2[j]>t&&track){
                    ans[i]=nums2[j];
                    break;
                 }
            }
        }
        return ans;
    }
};