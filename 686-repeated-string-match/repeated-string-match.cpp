class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count=0;
        string s="";
        while(s.size()<b.size()){
            count++;
            s=s+a;
        }
        auto it=s.find(b);
        if(it!=string::npos){
            return count;
        }
        s+=a;
        it=s.find(b);
        if(it!=string::npos)return count+1;
        return -1;
    }
};