class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                count[nums[i][j]]++;
            }
        }

        int x = nums.size();
        for (auto it : count) {
            if (it.second == x) {        
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};