class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        int count = 1;

        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[i - 1]) {
                ++count;
            } else {
                ans += (long long)count * (count + 1) / 2;
                count = 1;
            }
        }

        // Add the last segment
        ans += (long long)count * (count + 1) / 2;

        return ans;
    }
};
