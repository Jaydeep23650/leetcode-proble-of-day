class Solution {
public:
    void sortColors(vector<int>& nums) {
       int v[3]={0,1,2};
       int i=0,j=0,k=0;
       while(i<nums.size()){
          if(k>=3)break;
          if(nums[i]==v[k]){
            i++;
          }else{
            for(int j=i;j<nums.size();j++){
                if(nums[j]==v[k]&&nums[i]!=v[k]){
                    swap(nums[i],nums[j]);i++;
                }
            }
            k++;
          }
       }
    }
};