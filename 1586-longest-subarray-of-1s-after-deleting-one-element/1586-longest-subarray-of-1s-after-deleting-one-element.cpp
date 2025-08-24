class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        queue<int> Q;
        int ans = 0, zeros = 0;

        for (int x : nums) {
            Q.push(x);
            if (x == 0) zeros++;

            while (zeros > 1) {
                if (Q.front() == 0) zeros--;
                Q.pop();
            }
            ans = max(ans, (int)Q.size());
        }
        return ans > 0 ? ans - 1 : 0;
    }
};
