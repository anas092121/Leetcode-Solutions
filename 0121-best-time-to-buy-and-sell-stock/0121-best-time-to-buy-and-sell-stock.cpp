class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> maxPresent(n);

        int maxi = -1;
        for(int i=n-1; i>=0; i--){
            maxPresent[i] = maxi;
            maxi = max(maxi, prices[i]);
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, maxPresent[i] - prices[i]);
        }

        return ans;
    }
};