/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let ans=0,sum=0;
    for(let i=0;i<nums.length;i++){
        if(nums[i]){
            sum++;
            ans=Math.max(ans,sum);
        }else sum=0;
    }
    return ans;
};