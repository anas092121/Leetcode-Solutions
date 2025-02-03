class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int flag = 1;

        // increasing
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]){
                flag++;
            }
            else{
                ans = max(ans,flag);
                flag = 1;
            }
        }
        ans = max(ans,flag);

        // decreasing
        flag = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]){
                flag++;
            }
            else{
                ans = max(ans,flag);
                flag = 1;
            }
        }
        ans = max(ans,flag);
        return ans;
    }
};