class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        for(auto it : nums){
            maxi = max(maxi,it);
        }

        int ans = 0;
        while(k--){
            ans += maxi;
            maxi++;
        }
        return ans;
    }
};