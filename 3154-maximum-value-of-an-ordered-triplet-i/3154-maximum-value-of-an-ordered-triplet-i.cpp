class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;

        for (int i = 0; i < nums.size() - 2; i++) {
            long long fst = nums[i];
            for (int j = i + 1; j < nums.size() - 1; j++) {
                long long sec = nums[j];
                for (int k = j + 1; k < nums.size(); k++) {
                    long long third = nums[k];
                    long long val = (fst - sec) * third;
                    ans = max(ans, val);
                }
            }
        }
        return ans;
    }
};