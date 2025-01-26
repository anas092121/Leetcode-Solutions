class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0; i<matrix.size(); i++){

            // find min in row
            int mini = INT_MAX;
            for(int j=0; j<matrix[i].size(); j++){
                mini = min(mini,matrix[i][j]);
            }

            // index of min element in row
            int index;
            for(int j=0; j<matrix[i].size(); j++){
                if(mini == matrix[i][j]){
                    index = j;
                    break;
                }
            }

            // check if min element is max in column
            bool isMax = true;
            for(int k=0; k<matrix.size(); k++){
                if(mini < matrix[k][index]){
                    isMax = false;
                }
            }

            if(isMax){
                ans.push_back(mini);
            }

        }

        return ans;
    }
};