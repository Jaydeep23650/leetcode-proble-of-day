class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
          int n1=INT_MAX,n2=INT_MAX,n3=INT_MAX;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=n1){
                n1=arr[i];
            }else if(n2>=arr[i]){
                n2=arr[i];
            }else{
                return true;
            }
        }
        return false;
    }
};