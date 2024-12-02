class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            string pref = words[i];
            if (pref.size() <= s.size()) {
                bool flag = true;
                for (int j = 0; j < pref.size(); j++) {
                    if (s[j] != pref[j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    count++;
                }
            }
        }
        return count;
    }
};