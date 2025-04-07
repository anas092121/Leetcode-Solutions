class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int ast : asteroids) {
            bool destroyed = false;

            while (!st.empty() && ast < 0 && st.top() > 0) {
                if (abs(ast) > st.top()) {
                    st.pop(); // right one destroyed, keep checking
                } else if (abs(ast) == st.top()) {
                    st.pop(); // both destroyed
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; // left one destroyed
                    break;
                }
            }

            if (!destroyed)
                st.push(ast);
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
