class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Use a set to store unique elements in descending order
        std::set<int, std::greater<int>> s(nums.begin(), nums.end());

        if (s.size() >= 3) {
            auto it = s.begin();
            std::advance(it, 2);
            return *it;
        } else {
            return *s.begin();
        }
    }
};
