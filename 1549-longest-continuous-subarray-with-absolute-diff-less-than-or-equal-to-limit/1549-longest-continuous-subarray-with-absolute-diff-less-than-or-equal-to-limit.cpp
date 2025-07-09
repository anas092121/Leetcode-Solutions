class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxq, minq;
        int left = 0, right = 0, ans = 0;

        while (right < nums.size()) {
            while (!maxq.empty() && nums[right] > maxq.back()) maxq.pop_back();
            while (!minq.empty() && nums[right] < minq.back()) minq.pop_back();

            maxq.push_back(nums[right]);
            minq.push_back(nums[right]);

            while (maxq.front() - minq.front() > limit) {
                if (nums[left] == maxq.front()) maxq.pop_front();
                if (nums[left] == minq.front()) minq.pop_front();
                left++;
            }

            ans = max(ans, right - left + 1);
            right++;
        }

        return ans;
    }
};
