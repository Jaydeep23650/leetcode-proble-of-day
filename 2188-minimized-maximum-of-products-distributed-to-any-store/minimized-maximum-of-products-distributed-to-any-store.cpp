class Solution {
public:
    
    bool check(long long  mid,int size,vector<int>&quantities){
        long long num_b=0;
        for(int i=0;i<quantities.size();i++){
              if(quantities[i]%mid==0){
                num_b+=quantities[i]/mid;
              }else{
                num_b+=quantities[i]/mid+1;
              }
        }
       return num_b<=size?true:false;
    }
    
    int minimizedMaximum(int n, vector<int>& quantities) {
        long long sum=0;
        for(auto it:quantities)sum+=it;
        long long high=sum;
        long long low=1,ans=0;
        while(high>=low){
            long long mid=(high+low)/2;
            if(check(mid,n,quantities)){
              ans=mid;
              high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};