class Solution {
public:
    bool checkTwoChessboards(string a, string b) {
       int r1=abs(b[0]-a[0]);
       int r2=abs(b[1]-a[1]);
       if(r1%2==r2%2)return true;
       return false;
    }
};