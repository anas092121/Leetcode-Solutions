class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int hash[101] = {0};
        for (auto it : nums) hash[it]++;

        int pairs = 0, leftovers = 0;
        for (int i = 0; i <= 100; i++) {
            pairs += hash[i] / 2;
            leftovers += hash[i] % 2;
        }
        return {pairs, leftovers};
    }
};
