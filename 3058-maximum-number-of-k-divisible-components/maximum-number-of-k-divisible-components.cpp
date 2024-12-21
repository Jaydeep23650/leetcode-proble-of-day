// #include <vector>
// #include <unordered_map>
// using namespace std;

class Solution {
    int count; // Global variable to keep track of k-divisible components

public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        // Prepare adjacency list to represent the graph
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        count = 0; // Initialize count to 0
        dfs(0, -1, adj, values, k); // Start DFS from node 0
        return count;
    }

private:
    int dfs(int curr, int prev, vector<vector<int>>& adj, vector<int>& values, int k) {
        int sum = 0; // Initialize sum of the current subtree

        // Iterate over all adjacent nodes
        for (int v : adj[curr]) {
            if (v == prev) continue; // Skip the parent node
            sum += dfs(v, curr, adj, values, k); // Process the subtree rooted at v
        }

        sum += values[curr]; // Add current node's value
        sum %= k; // Reduce the sum modulo k

        if (sum == 0) {
            count++; // Increment the count for k-divisible components
        }

        return sum; // Return the sum of the subtree
    }
};