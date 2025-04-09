class Solution {
public:
    int minOperations(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int ans = 0;
        for(auto int i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                int temp = abs(nums[i] - nums[i-1]) + 1;
                ans += temp;
                cout<< temp<< " ";
                nums[i] = nums[i-1] + 1;
            }
        }
        return ans;
    }
};