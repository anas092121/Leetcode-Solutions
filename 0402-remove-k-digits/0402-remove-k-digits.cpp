class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> st;
        for (char it : num) {
            while (!st.empty() && st.back() > it && k > 0) {
                st.pop_back();
                k--;
            }
            st.push_back(it);
        }

        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }

        string result(st.begin(), st.end());

        // Remove leading zeros
        int i = 0;
        while (i < result.size() && result[i] == '0') i++;
        result = result.substr(i);

        return result.empty() ? "0" : result;
    }
};
