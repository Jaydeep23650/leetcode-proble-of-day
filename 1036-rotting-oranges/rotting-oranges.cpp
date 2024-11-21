class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int maxTime = 0; // To track the maximum time taken for all oranges to rot
        int fresh=0;
        queue<pair<int, pair<int, int>>> q; // Queue to perform BFS
 
        // Populate the queue with initially rotten oranges
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({0, {i, j}}); // Time is 0 for initially rotten oranges
                }
                if(grid[i][j]==1)fresh++;
            }
        }

        // Direction vectors for the four adjacent cells
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        // BFS to spread the rot
        while (!q.empty()) {
            int x = q.front().second.first;
            int y = q.front().second.second;
            int time = q.front().first;
            q.pop();

            maxTime = max(maxTime, time); // Update the maximum time

            // Check all four directions
            for (int i = 0; i < 4; i++) {
                int x1 = x + dr[i];
                int y1 = y + dc[i];

                // Check boundaries and if the orange is fresh
                if (x1 >= 0 && x1 < m && y1 >= 0 && y1 < n && grid[x1][y1] == 1) {                 
                    fresh--;
                    q.push({time + 1, {x1, y1}}); // Push the new position into the queue
                    grid[x1][y1] = 2; // Mark the orange as rotten
                }
            }
        }

        // If maxTime is still INT_MIN, it means no fresh oranges were there
        return  fresh>0?-1:maxTime;
    }
};