class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();
        for (int i = 1, imax = ans, imin = ans; i < n; i++) {
            if (nums[i] < 0){
                swap(imax, imin);
            }
            imax = max(nums[i], imax * nums[i]);
            imin = min(nums[i], imin * nums[i]);
            ans = max(ans, imax);
        }
        return ans;
    }
};