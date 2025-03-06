class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        n = n*n + 1;
        int hash[2501] = {0};
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                hash[grid[i][j]]++;
            }
        }

        vector<int> ans(2,-1);
        for(int i=1; i<n; i++){
            if(hash[i] == 2)    ans[0] = i;
            if(hash[i] == 0)    ans[1] = i;
        }
        return ans;
    }
};