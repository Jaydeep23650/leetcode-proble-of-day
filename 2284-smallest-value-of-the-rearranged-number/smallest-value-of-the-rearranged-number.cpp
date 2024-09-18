class Solution {
public:
    long long smallestNumber(long long num) {
        int s=(num<=0);
        long long ans=0;
        num=abs(num);
        vector<int>v;
        while(num){
            v.push_back(num%10);
            num=num/10;
        }
        if(s){
            sort(v.begin(),v.end(),[](int a,int b){
                return a>b;
            });
           for(int i=0;i<v.size();i++){
            ans=10*ans+v[i];
           }
           return -1*ans;
        }else{
             sort(v.begin(),v.end());
             int l=0;
             if(v[0]==0){
                while(v[l]==0){
                    l++;
                }
                if(l>=v.size())return 0;
                else swap(v[0],v[l]);
             }
             for(int i=0;i<v.size();i++){
            ans=10*ans+v[i];
           }
           return ans;
        }

        


        return ans;
    }
};