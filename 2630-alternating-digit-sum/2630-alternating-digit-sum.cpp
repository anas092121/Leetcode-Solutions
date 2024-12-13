class Solution {
public:
    int alternateDigitSum(int n) {
        stack<int> st;
        while(n){
            st.push(n%10);
            n /= 10;
        }
        int ans = 0;
        bool flag = true;
        while(!st.empty()){
            if(flag){
                ans += st.top();
            }
            else{
                ans -= st.top();
            }
            st.pop();
            flag = !flag;
        }
        return ans;
    }
};