class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans;
        int i = nums.size() - 1;
        for(k; k>0; k--){
            ans=nums[i];
            i--;
        }
        return ans;
    }
};