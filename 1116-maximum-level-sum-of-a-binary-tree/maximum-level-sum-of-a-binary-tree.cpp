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
    int maxLevelSum(TreeNode* root) {
        int ans=0,num=INT_MIN,count=0;
        queue<TreeNode*>q;
        q.push(root);
         while(!q.empty()){
            int size=q.size();
            count++;
            int sum=0;
            while(size--){
                TreeNode* temp=q.front();
                sum+=temp->val;
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(sum>num){
                num=sum;
                ans=count;
            }
         }
         return ans;
    }
};