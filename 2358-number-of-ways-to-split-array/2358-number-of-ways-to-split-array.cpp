class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> sumArr(nums.size());
        long long sum = 0;
        for(int i = nums.size()-1; i>=0; i--){
            sum += nums[i];
            sumArr[i] = sum;
        }

        int count = 0;
        sum = 0;
        for(int i=0; i<nums.size()-1; i++){
            sum += nums[i];
            if(sum >= sumArr[i+1])  count++;
        }
        return count;
    }
};