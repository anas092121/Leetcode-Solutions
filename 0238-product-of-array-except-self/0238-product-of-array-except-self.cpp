class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        int pd = 1;
        for(int i=0; i<nums.size(); i++){
            left[i] = pd;
            pd *= nums[i];
        }

        vector<int> right(nums.size());
        pd=1;
        for(int i = nums.size()-1; i >= 0; i--){
            right[i] = pd;
            pd *= nums[i];
        }

        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(left[i]*right[i]);
        }

        return ans;
    }
};