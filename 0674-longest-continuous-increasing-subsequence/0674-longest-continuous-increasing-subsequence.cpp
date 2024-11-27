class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count;
        count = 1;
        int ans = count;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};