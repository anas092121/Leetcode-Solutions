class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> rows;
        vector<vector<int>> cols;

        for(int i=0; i<grid.size(); i++){
            rows.push_back(grid[i]);
        }

        for(int i=0; i<grid.size(); i++){
            vector<int> temp;
            for(int j=0; j<grid.size(); j++){
                temp.push_back(grid[j][i]);
            }
            cols.push_back(temp);
        }

        int ans = 0;
        
        for(int i=0; i<rows.size(); i++){
            for(int j=0; j<rows.size(); j++){
                if(rows[i] == cols[j]){
                    ans++;
                }
            }
        }

        return ans;

    }
};