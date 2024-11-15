class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        int n=arr.size();
        while(i+1<n&&arr[i]<=arr[i+1])i++;
        while(j>0&&arr[j]>=arr[j-1])j--;
        int ans=min(n-1-i,j);
        if(i==n-1)return 0;
        int temp=0;
     
        while(temp<=i and j<n){
            if(arr[temp]<=arr[j]){
                ans=min(ans,j-temp-1);
                //    cout<<j<<" "<<i<<endl;
                temp++;
            }else j++;
            
        }
        return ans;
    }
};