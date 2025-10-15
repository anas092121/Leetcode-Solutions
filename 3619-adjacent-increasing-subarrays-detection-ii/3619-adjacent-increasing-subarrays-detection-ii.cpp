class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
            return 1;

        vector<int> incLength(n, 1);
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                incLength[i] = incLength[i - 1] + 1;
            }
        }

        int start = 1, end = n / 2, ans = 1;
        while (start <= end) {
            int k = start + (end - start) / 2;
            bool found = false;

            for (int i = 0; i <= n - 2 * k; i++) {
                if (incLength[i + k - 1] >= k &&
                    incLength[i + 2 * k - 1] >= k) {
                    found = true;
                    break;
                }
            }

            if (found) {
                ans = k;
                start = k + 1;
            } else {
                end = k - 1;
            }
        }

        return ans;
    }
};
