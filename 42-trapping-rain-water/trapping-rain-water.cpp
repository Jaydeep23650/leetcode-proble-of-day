class Solution {
public:
    int trap(vector<int>& h) {
       int i=0,j=h.size()-1,left_max=0,right_max=0,ans=0;
       while(i<j){
          if(h[i]<h[j]){
              if(left_max<h[i])left_max=h[i];
              else ans+=left_max-h[i];
              i++;
          }else{
            if(right_max<h[j])right_max=h[j];
            else{
                ans+=right_max-h[j];
            }
            j--;
          }
       }





       return ans;
    }
};