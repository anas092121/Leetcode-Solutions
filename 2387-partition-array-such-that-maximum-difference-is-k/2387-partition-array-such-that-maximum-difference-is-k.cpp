class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int ans = 1;
        int st = nums[0];
        for(int i=1; i<nums.size(); i++){
            int diff = nums[i]-st;
            
            if(diff <= k)   continue;
            else{
                ans++;
                st = nums[i];
            }
        }
        return ans;
    }
};