class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = true;

        if (word.size() >= 2 && word[word.size() - 1] <= 90) {
            for (int i = 0; i < word.size(); i++) {
                if (word[i] >= 65 && word[i] <= 90) {
                    continue;
                } else {
                    return false;
                }
            }
        } else {
            for (int i = 1; i < word.size(); i++) {
                if (word[i] >= 'a' && word[i] <= 'z') {
                    continue;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};