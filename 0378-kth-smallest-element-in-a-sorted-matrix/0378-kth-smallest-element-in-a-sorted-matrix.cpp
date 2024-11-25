class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int ans  =  -1;
        vector<int> res;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                res.push_back(matrix[i][j]);
            }
        }

        sort(res.begin(), res.end());
        for(int i=0; i<res.size(); i++){
                k--;
                if(!k){
                    ans = res[i];
                    break;
                }
            }
        return ans;
    }
};