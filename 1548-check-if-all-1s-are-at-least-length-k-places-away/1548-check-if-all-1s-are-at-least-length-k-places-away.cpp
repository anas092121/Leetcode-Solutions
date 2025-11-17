class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev = NULL;
        int i=0;
        for(i; i<nums.size(); i++){
            if(nums[i] == 1){
                prev = i;
                i++;
                break;
            }
        }

        for(i; i<nums.size(); i++){
            if(nums[i] == 1){
                if(i - prev <= k)   return false;
                prev = i;
            }
        }

        return true;
    }
};