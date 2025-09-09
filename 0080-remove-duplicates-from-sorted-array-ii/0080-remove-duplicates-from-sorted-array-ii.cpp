class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        int idx = 1; 
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i]!=nums[i-1] || nums[i]!=nums[i+1]){
                nums[idx] = nums[i];
                idx++;
            }
        }
        if(idx < nums.size())
            nums[idx] = nums[nums.size()-1];
        return ++idx;
    }
};