class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p = 0;
        int n = 0;

        for (auto it : nums) {
            if (it > 0)
                p++;
            if (it < 0)
                n++;
        }
        return max(p, n);
    }
};