/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        int ans=0;
        queue<TreeNode*>q;
        q.push(root);
        vector<long long>v;
        while(!q.empty()){
            int size=q.size();
        
            long long sum=0;
            while(size--){
                TreeNode* temp=q.front();
                sum+=temp->val;
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            v.push_back(sum);
     
        }
        if(k>v.size())return -1;
        sort(begin(v),end(v),greater<long long>());
      
        return v[k-1];
       
    }
};