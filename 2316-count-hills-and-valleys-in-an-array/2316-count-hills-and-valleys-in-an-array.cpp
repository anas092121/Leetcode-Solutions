class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0;
        int prev = nums[0]; 

        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) continue; 

            if ((nums[i] > prev && nums[i] > nums[i + 1]) || 
                (nums[i] < prev && nums[i] < nums[i + 1])) {
                ans++;
            }
            prev = nums[i]; 
        }
        return ans;
    }
};
