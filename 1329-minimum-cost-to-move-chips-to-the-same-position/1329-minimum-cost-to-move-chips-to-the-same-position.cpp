#include<math.h>
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        for(auto it : position){
            if(it%2 != 0){
                odd++;
            }
        }
        return min(odd, static_cast<int>(position.size()) - odd);
    }
};