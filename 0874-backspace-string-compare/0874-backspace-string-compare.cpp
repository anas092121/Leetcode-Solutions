class Solution {
public:
    string solve(string s){
        stack<char> st;
        for(char c : s) {
            if(c != '#') {
                st.push(c);
            }
            else if(c=='#' && !st.empty()) {
                st.pop();
            }
        }
        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end()); // Reverse to maintain order
        return ans;
    }

    bool backspaceCompare(string s, string t) {
        string S = solve(s);
        string T = solve(t);
        return S==T;
    }
};