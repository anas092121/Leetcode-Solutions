class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int minValue = *min_element(nums.begin(), nums.end());
        if (minValue < k) {
            return -1;
        }
        int count = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > k) {
                ++count;
                while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                    ++i;
                }
            }
        }
        return count;
    }
};