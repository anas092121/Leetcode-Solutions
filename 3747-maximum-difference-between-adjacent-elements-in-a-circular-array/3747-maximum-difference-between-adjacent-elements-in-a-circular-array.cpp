class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans = abs(nums[nums.size()-1] - nums[0]);
        int prev = nums[0];
        for(int i=1; i<nums.size(); i++){
            int diff  = abs(nums[i] - prev);
            ans = max(ans,diff);
            prev = nums[i];
        }














        

        return ans;
    }
};