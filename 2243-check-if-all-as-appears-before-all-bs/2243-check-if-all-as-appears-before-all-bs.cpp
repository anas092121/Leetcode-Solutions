class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' && flag){
                return false;
            }
            else if(s[i]=='b'){
                flag = true;
            }
        }
        return true;
    }
};