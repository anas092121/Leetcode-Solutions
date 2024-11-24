class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans = INT_MAX;
        bool flag = false;
        for(int i=0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]<nums[j]){
                    for(int k=j+1; k<nums.size(); k++){
                        if(nums[k]<nums[j]){
                            int sum = nums[i]+nums[j]+nums[k];
                            ans = min(ans,sum);
                            flag = true;
                        }
                    }
                }
            }
        }
        return flag ? ans : -1;
    }
};