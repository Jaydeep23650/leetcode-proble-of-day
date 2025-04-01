class Solution {
public:
    bool isvalid(vector<vector<char>>& grid, int row, int col, int n, int m) {
        return row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == '1';
    }

    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,1,0,-1};

    void dfs(vector<vector<char>>& grid, int i, int j, int n, int m) {
        grid[i][j] = '0'; // Mark the cell as visited
        for (int k = 0; k < 4; k++) {
            int x = i + dr[k];
            int y = j + dc[k];
            if (isvalid(grid, x, y, n, m)) {
                dfs(grid, x, y, n, m);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0; // Check for empty grid

        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j, n, m);
                    count++;
                }
            }
        }
        return count;
    }
};