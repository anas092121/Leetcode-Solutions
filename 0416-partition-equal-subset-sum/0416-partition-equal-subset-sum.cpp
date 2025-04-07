class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int k) {
        int n = arr.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, false));

        for (int i = 0; i <= n; i++)
            dp[i][0] = true;

        for (int i = 1; i <= n; i++) {
            for (int target = 1; target <= k; target++) {
                if (arr[i - 1] <= target)
                    dp[i][target] =
                        dp[i - 1][target] || dp[i - 1][target - arr[i - 1]];
                else
                    dp[i][target] = dp[i - 1][target];
            }
        }
        return dp[n][k];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto it : nums) {
            sum += it;
        }

        if (sum % 2 != 0)
            return false;

        int k = sum / 2;
        return isSubsetSum(nums, k);
    }
};