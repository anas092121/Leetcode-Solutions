class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count = 0;  // Count of elements to remove
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                count++;
                if (count > 1)
                    return false;

                // Decide whether to remove nums[i-1] or nums[i]
                if (i > 1 && nums[i] <= nums[i - 2]) {
                    nums[i] = nums[i - 1]; // Pretend nums[i] is removed
                }
                // else pretend nums[i - 1] is removed (do nothing)
            }
        }
        return true;
    }
};
