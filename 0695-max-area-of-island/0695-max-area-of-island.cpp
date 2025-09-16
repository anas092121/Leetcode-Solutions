class Solution {
public:
    int rows;
    int cols;
    vector<vector<bool>> visited;

    void solve(vector<vector<int>>& grid, int r, int c, int& area) {
        visited[r][c] = true;

        // down
        if (r < rows-1 && grid[r+1][c] == 1 && !visited[r+1][c]) {
            area++;
            solve(grid, r+1, c, area);
        }
        // right
        if (c < cols-1 && grid[r][c+1] == 1 && !visited[r][c+1]) {
            area++;
            solve(grid, r, c+1, area);
        }
        // up
        if (r > 0 && grid[r-1][c] == 1 && !visited[r-1][c]) {
            area++;
            solve(grid, r-1, c, area);
        }
        // left
        if (c > 0 && grid[r][c-1] == 1 && !visited[r][c-1]) {
            area++;
            solve(grid, r, c-1, area);
        }
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        visited.assign(rows, vector<bool>(cols, false));

        int ans = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    int area = 1;
                    solve(grid, i, j, area);
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }
};