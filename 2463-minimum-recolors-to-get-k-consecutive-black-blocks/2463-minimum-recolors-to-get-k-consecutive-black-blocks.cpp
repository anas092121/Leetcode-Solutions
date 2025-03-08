class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans = k;
        for(int i=0; i<=blocks.size()-k; i++){
            int reColors = 0;
            int j = i;
            int temp = k;
            while(temp--){
                if(blocks[j] == 'W'){
                    reColors++;
                }
                j++;
            }
            ans = min(ans,reColors);
        }
        return ans;
    }
};