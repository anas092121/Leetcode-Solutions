class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string res = strs[0];
        int k = 0;
        int minsize = strs[0].size();
        for (int row = 0; row < strs.size(); row++) {
            // minsize = (minsize , strs[0].size());
            if (minsize > strs[row].size()) {
                minsize = strs[row].size();
            }
        }

        for (int col = 0; col < minsize; col++) {
            bool common = true;
            for (int row = 0; row < strs.size(); row++) {
                if (res[col] != strs[row][col]) {
                    common = false;
                    break;
                }
            }
            if (common) {
                ans += res[col];
            } else {
                break;
            }
        }

        return ans;
    }
};