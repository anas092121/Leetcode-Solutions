class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> lsum;
        vector<int> rsum(nums.size());

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            lsum.push_back(sum);
            sum += nums[i];
        }

        sum = 0;
        for (int i = nums.size()-1; i>=0; i--){
            rsum[i] = sum;
            sum += nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            if(lsum[i] == rsum[i]){
                return i;
            }
        }
        return -1;
        
    }
};