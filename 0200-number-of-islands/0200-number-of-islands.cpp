class Solution {
public:
    int rows, cols;
    vector<vector<bool>> visited;

    void dfs(vector<vector<char>>& grid, int r, int c) {
        visited[r][c] = true;

        if (r < rows-1 && grid[r+1][c] == '1' && !visited[r+1][c])
            dfs(grid, r+1, c);
        if (c < cols-1 && grid[r][c+1] == '1' && !visited[r][c+1])
            dfs(grid, r, c+1);
        if (r > 0 && grid[r-1][c] == '1' && !visited[r-1][c])
            dfs(grid, r-1, c);
        if (c > 0 && grid[r][c-1] == '1' && !visited[r][c-1])
            dfs(grid, r, c-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        visited.assign(rows, vector<bool>(cols, false));

        int count = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};
