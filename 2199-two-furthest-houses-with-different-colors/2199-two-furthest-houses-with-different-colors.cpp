class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = 0;
        for(int i=0; i<colors.size(); i++){
            int count = 0;
            for(int j=i+1; j<colors.size(); j++){
                if(colors[i]!=colors[j]){
                    count = j-i;
                }
            }
            ans = max(ans,count);
        }
        return ans;
    }
};