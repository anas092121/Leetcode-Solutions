class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> count, start, end;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
            if (start.find(nums[i]) == start.end()) {
                start[nums[i]] = i;
            }
            end[nums[i]] = i;
        }

        int degree = 0, minLength = nums.size();

        for (auto it : count) {
            if (it.second > degree) {
                degree = it.second;
                minLength = end[it.first] - start[it.first] + 1;
            } else if (it.second == degree) {
                minLength = min(minLength, end[it.first] - start[it.first] + 1);
            }
        }

        return minLength;
    }
};
