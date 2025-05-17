class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)zero++;
            else if(nums[i]==1){
                one++;
            }else if(nums[i]==2)two++;
        }
        int n=nums.size()-1;
        while(two--){
           nums[n--]=2;
        }
        while(one--) nums[n--]=1;
           while(zero--) nums[n--]=0;

    }
};