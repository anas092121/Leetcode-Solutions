class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        vector<long long> lengths(operations.size() + 1);
        lengths[0] = 1; // initial word is "a"

        int n = operations.size();

        for (int i = 0; i < n; i++) {
            if (lengths[i] > k) {
                lengths[i + 1] = k + 1;
            } else {
                lengths[i + 1] = lengths[i] * 2;
            }
        }

        char ch = 'a';

        for (int i = n - 1; i >= 0; i--) {
            long long len = lengths[i];

            if (k > len) {
                k -= len;
                if (operations[i]) {
                    ch = (ch == 'z') ? 'a' : ch + 1;
                }
            }
        }

        return ch;
    }
};
