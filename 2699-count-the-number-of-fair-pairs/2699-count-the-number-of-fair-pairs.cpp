class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long count = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            auto low = lower_bound(nums.begin()+i+1, nums.end(), lower-nums[i]);
            auto high = upper_bound(nums.begin()+i+1, nums.end(), upper-nums[i]);

            count += high-low;
        }
        return count;
    }
};