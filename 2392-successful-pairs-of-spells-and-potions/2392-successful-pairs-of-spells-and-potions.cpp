class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        int n = potions.size();
        
        for (int sp : spells) {
            int st = 0, end = n - 1, idx = n;
            while (st <= end) {
                int mid = (st + end) / 2;
                long long target = 1LL * potions[mid] * sp;
                if (target >= success) {
                    idx = mid;
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
            ans.push_back(n - idx);
        }
        return ans;
    }
};
