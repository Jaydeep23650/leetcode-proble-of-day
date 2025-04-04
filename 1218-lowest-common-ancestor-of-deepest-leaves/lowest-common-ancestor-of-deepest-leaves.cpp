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
    // This function returns a pair containing the LCA of the deepest leaves and their depth
    pair<TreeNode*, int> dfs(TreeNode* root) {
        if (root == nullptr) return {nullptr, 0}; // Base case: if the node is null, return null and depth 0
        
        auto left = dfs(root->left);   // Recur for the left subtree
        auto right = dfs(root->right); // Recur for the right subtree
        
        // If both left and right depths are equal, the current node is the LCA
        if (left.second == right.second) {
            return {root, left.second + 1}; // Return current node and increment depth
        } 
        // If left depth is greater, return the left LCA
        else if (left.second > right.second) {
            return {left.first, left.second + 1}; // Return left LCA and increment depth
        } 
        // If right depth is greater, return the right LCA
        else {
            return {right.first, right.second + 1}; // Return right LCA and increment depth
        }
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root).first; // Return the LCA of the deepest leaves
    }
};