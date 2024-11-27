class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count;
        count = nums[0];
        int ans = count;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};