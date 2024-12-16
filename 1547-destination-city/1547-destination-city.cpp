class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map <string ,int> count;
        for(int i=0; i<paths.size(); i++){
            count[paths[i][0]]++;
        }
        for(int i=0; i<paths.size(); i++){
            for(int j=0; j<2; j++){
                if(count[paths[i][j]]==0){
                    return paths[i][j];
                }
            }
        }
        return "hello";

    }
};