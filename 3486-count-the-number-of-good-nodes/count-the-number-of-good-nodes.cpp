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
    int goodNodes = 0;
    vector<int> edges;
    vector<vector<int>> adjList;
    vector<int> subtreeSizes;

    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        this->edges = vector<int>(n);
        adjList = vector<vector<int>>(n);
        subtreeSizes = vector<int>(n);

        // Build adjacency list
        for (auto& edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }

        // Perform DFS
        dfs(0, -1);

        return goodNodes;
    }

    int dfs(int node, int parent) {
        int size = 1;
        unordered_set<int> subtreeSizesSet;

        for (int child : adjList[node]) {
            if (child == parent) continue;
            int childSize = dfs(child, node);
            subtreeSizesSet.insert(childSize);
            size += childSize;
        }

        // If all subtrees have the same size, increment goodNodes
        if (subtreeSizesSet.size() <= 1) goodNodes++;

        return size;
    }
};