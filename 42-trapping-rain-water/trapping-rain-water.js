/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    
    let left_max=0,right_max=0,ans=0;
    let high=height.length-1,low=0;
    while(low<high){
        if(height[low]<height[high]){
            if(height[low]<left_max){ans+=left_max-height[low];}
            else left_max=height[low];
            low++;
        }else{
            if(height[high]>right_max)right_max=height[high];
            else ans+=right_max-height[high];
            high--;
        }
       
    }
     return ans;
};