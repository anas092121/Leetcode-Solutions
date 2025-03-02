class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> st;
        int index = 0;
        for(int i=1; i<=n; i++){
            st.push(i);
            ans.push_back("Push");
            if(st.top() == target[index]){
                index++;
            }else{
                ans.push_back("Pop");
            }
            if(index >= target.size())  break;
        }
        return ans;
    }
};