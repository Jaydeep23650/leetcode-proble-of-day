class Solution {
public:
    string addStrings(string nums1, string nums2) {
        int c=0;
        string ans="";
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        while(i>=0||j>=0||c>0){
            if(i>=0){
                c+=nums1[i--]-'0';
            }
            if(j>=0){
                c+=nums2[j--]-'0';
            }
            ans+=c%10+'0';
            c=c/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};