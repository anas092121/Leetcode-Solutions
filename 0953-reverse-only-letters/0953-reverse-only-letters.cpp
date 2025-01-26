class Solution {
public:
    bool isAlphabet(char ch) {
        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
    }

    string reverseOnlyLetters(string s) {
        string ans = "";
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (isAlphabet(s[i])) {
                st.push(s[i]);
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (isAlphabet(s[i])) {
                ans += st.top();
                st.pop();
            }
            else{
                ans += s[i];
            }
        }

        return ans;
    }
};