class Solution {
public:
    bool dfs(vector<vector<char>>& mat, int i, int j, vector<vector<bool>>& vis) {
        int m = mat.size(), n = mat[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n) return false;
        if (mat[i][j] == 'X' || vis[i][j]) return true;
        vis[i][j] = true;
        if (i == 0 || j == 0 || i == m - 1 || j == n - 1) return false;

        bool up = dfs(mat, i - 1, j, vis);
        bool down = dfs(mat, i + 1, j, vis);
        bool left = dfs(mat, i, j - 1, vis);
        bool right = dfs(mat, i, j + 1, vis);

        return up && down && left && right;
    }

    void fillRegion(vector<vector<char>>& mat, int i, int j, vector<vector<bool>>& vis) {
        int m = mat.size(), n = mat[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n || mat[i][j] == 'X' || vis[i][j]) return;
        vis[i][j] = true;
        mat[i][j] = 'X';
        fillRegion(mat, i - 1, j, vis);
        fillRegion(mat, i + 1, j, vis);
        fillRegion(mat, i, j - 1, vis);
        fillRegion(mat, i, j + 1, vis);
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O' && !vis[i][j]) {
                    vector<vector<bool>> temp(m, vector<bool>(n, false));
                    if (dfs(board, i, j, temp))
                        fillRegion(board, i, j, vis);
                }
            }
        }
    }
};
