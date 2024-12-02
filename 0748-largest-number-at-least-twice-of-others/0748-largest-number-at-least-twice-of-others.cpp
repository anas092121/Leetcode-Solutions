class Solution {
public:
    int dominantIndex(vector<int>& nums){
        int ans = INT_MIN;
        int idx = 0;
        for(int i=0; i<nums.size(); i++){
            if(ans<nums[i]){
                ans = nums[i];
                idx = i;
            }
        }
        bool flag = true;
        for(int i=0; i<nums.size(); i++){
            if(idx == i){
                continue;
            }
            if((nums[i]*2) > ans){
                return -1;
            }
        }
        return idx;
    }
};