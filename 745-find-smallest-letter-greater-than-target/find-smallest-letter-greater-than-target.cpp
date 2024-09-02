class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // char ans='';
         auto i=upper_bound(letters.begin(),letters.end(),target);
         int s=i-letters.begin();
         if(letters.end()!=i)
       return letters[s];
    //    return '-1';
     return letters[0];
    }
};