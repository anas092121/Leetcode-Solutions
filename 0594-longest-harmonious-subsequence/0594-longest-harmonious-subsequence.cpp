class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }

        int ans = 0;
        for(auto it : mp){
            if (mp.count(it.first + 1)) {
                int count = it.second + mp[it.first + 1];
                ans = max(ans, count);
            }
        }

        return ans;
    }
};