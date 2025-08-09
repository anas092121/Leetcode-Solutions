class Solution {
    public int removeDuplicates(int[] nums) {
        int idx = 1;
        int prev = nums[0];
        for(int i=1; i<nums.length; i++){
            if(nums[i] == prev) continue;
            nums[idx] = nums[i];
            idx++;
            prev = nums[i];
        }
        return idx;
    }
}