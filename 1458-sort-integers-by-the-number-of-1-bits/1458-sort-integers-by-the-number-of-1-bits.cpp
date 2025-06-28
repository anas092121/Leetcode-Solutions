class Solution {
public:
    int countOnes(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1); // Clear the lowest set bit
            count++;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& nums) {
        vector<int> ans;

        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); i++) {
            int count = countOnes(nums[i]);
            arr.push_back({nums[i], count});
        }

        sort(arr.begin(), arr.end(),
            [](auto& a, auto& b) { 
                return (a.second == b.second) ? a.first < b.first : a.second < b.second;
            });


        for (int i = 0; i < arr.size(); i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};