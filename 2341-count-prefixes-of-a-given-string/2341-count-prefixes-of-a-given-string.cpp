class Solution {
public:
    int countPrefixes(vector<string>& words, string pref) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            string res = words[i];
            if (res.size() <= pref.size()) {
                bool flag = true;
                for (int j = 0; j < res.size(); j++) {
                    if (pref[j] != res[j]) {
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