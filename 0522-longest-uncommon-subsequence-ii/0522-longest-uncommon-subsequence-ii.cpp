class Solution {
public:
    bool isSubsequence(const string& s1, const string& s2) {
        int i = 0, j = 0;
        while (i < s1.length() && j < s2.length()) {
            if (s1[i] == s2[j]) {
                i++;
            }
            j++;
        }
        return i == s1.length();
    }

    int findLUSlength(vector<string>& strs) {
        int ans = -1;

        for (int i = 0; i < strs.size(); i++) {
            bool isUncommon = true;
            
            // Compare strs[i] with every other string strs[j]
            for (int j = 0; j < strs.size(); j++) {
                if (i != j) {
                    // If strs[i] is a subsequence of strs[j], then strs[i] is not uncommon
                    if (isSubsequence(strs[i], strs[j])) {
                        isUncommon = false;
                        break;
                    }
                }
            }

            // If strs[i] is not a subsequence of any other string, update the answer
            if (isUncommon) {
                ans = max(ans, (int)strs[i].length());
            }
        }

        return ans;
    }
};
