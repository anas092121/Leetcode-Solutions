class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        string ans;
        ans += ch;
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch){
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
                for(int j=i+1; j<word.size(); j++){
                    ans += word[j];
                }
                return ans;
            }
            else{
                st.push(word[i]);
            }
        } 
        return word;
    }
};