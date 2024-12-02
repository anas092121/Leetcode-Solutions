class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool flag = true;
        while(flag){
            flag = false;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==original){
                    original *= 2;
                    flag = true;
                }
            }
        }
        return original;
    }
};