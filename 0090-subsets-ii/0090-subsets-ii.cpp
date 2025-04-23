class Solution {
public:
    void solve(vector<int> nums, vector<int> output, int index,
               vector<vector<int>>& ans) {
        // base case
        if (index >= nums.size()) {
            sort(output.begin(), output.end());
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output, index + 1, ans);

        // include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // set<vector<int>> uniqueTriplets;
        // uniqueTriplets.insert(vt);

        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return removeDuplicates(ans);
    }

    vector<vector<int>> removeDuplicates(vector<vector<int>>& arr) {
        set<vector<int>> uniqueSet(arr.begin(), arr.end());
        return vector<vector<int>>(uniqueSet.begin(), uniqueSet.end());
    }
};