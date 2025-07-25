class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = 0;
        int maxi = INT_MIN;
        map<int, int> mp;
        for (auto it : nums) {
            maxi = max(maxi, it);
            if (mp[it])
                continue;
            if (it > 0)
                ans += it;
            mp[it]++;
        }
        return maxi > 0 ? ans : maxi;
    }
};