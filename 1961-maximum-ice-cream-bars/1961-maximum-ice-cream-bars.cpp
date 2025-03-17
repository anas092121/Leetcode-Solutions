class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int cost = 0;
        for(int i=0; i<costs.size(); i++){
            cost += costs[i];
            if(cost > coins){
                return i;
            }
        }
        return costs.size();
    }
};