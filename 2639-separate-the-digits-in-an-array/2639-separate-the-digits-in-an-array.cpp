class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            stack<int> st;
            // pushing elements
            while(temp){
                st.push(temp%10);
                temp /= 10;
            }
            // poping from stack and storing in array
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};