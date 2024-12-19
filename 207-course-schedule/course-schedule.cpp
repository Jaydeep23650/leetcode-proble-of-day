class Solution {
public:
    bool dfs(int u, vector<int>& vis, vector<int>& recStack, map<int, list<int>>& adj) {
        // Mark the current node as visited and add to recursion stack
        vis[u] = 1;
        recStack[u] = 1;

        // Recur for all the vertices adjacent to this vertex
        for (auto it : adj[u]) {
            // If the node is not visited, recurse on it
            if (!vis[it]) {
                if (dfs(it, vis, recStack, adj)) {
                    return true; // Cycle detected
                }
            }
            // If the node is in the recursion stack, a cycle is found
            else if (recStack[it]) {
                return true; // Cycle detected
            }
        }

        // Remove the vertex from recursion stack
        recStack[u] = 0;
        return false; // No cycle detected
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> vis(numCourses, 0); // Visited array
        vector<int> recStack(numCourses, 0); // Recursion stack
        map<int, list<int>> adj; // Adjacency list

        // Build the adjacency list
        for (auto it : prerequisites) {
            adj[it[1]].push_back(it[0]);
        }

        // Check for cycles in different components of the graph
        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (dfs(i, vis, recStack, adj)) {
                    return false; // Cycle detected
                }
            }
        }
        return true; // No cycles detected, can finish all courses
    }
};