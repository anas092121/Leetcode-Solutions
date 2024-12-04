class Solution {
public:
    // Use sets for faster lookup
    unordered_set<char> first = {'q', 'w', 'e', 'r', 't', 'y', 'u','i', 'o', 'p', 'Q', 'W', 'E', 'R','T', 'Y', 'U', 'I', 'O', 'P'};
    unordered_set<char> second = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l','A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
    unordered_set<char> third = {'z', 'x', 'c', 'v', 'b', 'n', 'm','Z', 'X', 'C', 'V', 'B', 'N', 'M'};

    bool canBeTypedFromRow(const string& word, const unordered_set<char>& rowSet) {
        for (char ch : word) {
            if (rowSet.find(ch) == rowSet.end()) {
                return false;
            }
        }
        return true;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for (const string& word : words) {
            if (canBeTypedFromRow(word, first) ||
                canBeTypedFromRow(word, second) ||
                canBeTypedFromRow(word, third)) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};
