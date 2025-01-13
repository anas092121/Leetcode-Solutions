class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        int hash[201] = {0}; 
        for (int num : nums) {
            hash[num]++;
        }

        bool flag = true;
        int j=0;
        while(flag){
            flag = false;
            vector<int> row;
            for(int i=1; i<201; i++){
                if(hash[i]){
                    flag = true;
                    row.push_back(i);
                    hash[i]--;
                }
            }
            if (!row.empty()) {
                ans.push_back(row); 
            }
            j++;
        }
        return ans;
    }
};