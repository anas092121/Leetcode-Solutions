class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        if(nums == temp)    return true;

        sort(nums.begin(), nums.end(), greater<int>());
        return nums == temp;
    }
};