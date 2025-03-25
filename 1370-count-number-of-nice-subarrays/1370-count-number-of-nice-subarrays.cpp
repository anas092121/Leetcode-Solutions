class Solution {
public:
    int atMostK(vector<int>& nums, int k) {
        if (k < 0) return 0;
        int i = 0, ans = 0;
        for (int j = 0; j < nums.size(); j++) {
            k -= (nums[j] % 2);
            while (k < 0) {
                k += (nums[i] % 2);
                i++;
            }
            ans += (j - i + 1);
        }
        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};
