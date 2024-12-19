class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count=0,seen=0;
        for(int i=0;i<arr.size();i++){
            seen=max(seen,arr[i]);
            if(i==seen)count++;
        }
       
      
        return count;
    }
};

// class Solution {
// public:
//     int maxChunksToSorted(vector<int>& arr) {
//         int n=arr.size();
//         int cnt=0;
//         for(int i=0;i<n;){
//             for(int j=i;j<n;j++){
//                 if(j!=arr[j]){
//                     continue;
//                 }
//                 else{
//                     cnt+=1;
//                     i=j+1;
//                     break;
//                 }
//             }
//         }
//         return cnt;
//     }
// };


// class Solution {
// public:
//     int maxChunksToSorted(std::vector<int>& arr) {
//         int n = arr.size();
//         int maxi = 0;
//         int cnt = 0;
        
//         for (int i = 0; i < n; ++i) {
//             maxi = max(maxi, arr[i]);
//             if (maxi == i) {
//                 cnt++;
//             }
//         }
        
//         return cnt;
//     }
// };
