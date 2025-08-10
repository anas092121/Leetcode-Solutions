class Solution {
    public int[] productExceptSelf(int[] nums) {
        int prod = 1;
        int zeroCount = 0;
        
        for (int x : nums) {
            if (x != 0) prod *= x;
            else zeroCount++;
        }

        int[] ans = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            if (zeroCount > 1) ans[i] = 0;
            else if (zeroCount == 1) ans[i] = (nums[i] == 0) ? prod : 0;
            else ans[i] = prod / nums[i];
        }
        return ans;
    }
}
