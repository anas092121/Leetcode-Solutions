class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        for(int i = num.size()-1; i>=0; i--){
            int temp = num[i] - '0';
            if(temp%2 != 0){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};