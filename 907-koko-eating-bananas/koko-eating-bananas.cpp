class Solution {
public:


    bool possible(vector<int>& piles,int mid, int h){
        int count=0;
        for(auto it:piles){
            count+=it/mid+(it%mid!=0);
            if(count>h)return false;

        }
          if(count>h)return false;return true;

    }

    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int ans=0;
        int low=1,high=piles[n-1];
        while(high>=low){
            int mid=(low+high)/2;
            if(possible(piles,mid,h)){
                ans=mid;
               high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};