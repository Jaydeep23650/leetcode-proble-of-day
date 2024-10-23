class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto it:matrix){
            for(auto i:it){
                if(i==target)return true;
            }
        }
        return false;
    }
};