class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(),
            [](auto& a, auto& b) { return abs(a) < abs(b);
        });

        for (int i = (nums.size() - 1); i >= 0; i--) {
            if (k && nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        if (k % 2 != 0) {
            nums[0] = -nums[0];
        }

        int sum = 0;
        for (auto it : nums) {
            sum += it;
        }

        return sum;
    }
};