class Solution {
public:
    string finalString(string s) {
        string res = "";
        for(auto it : s){
            if(it=='i'){
                string temp = "";
                for(int i=res.size()-1; i>=0; i--){
                    temp = temp + res[i];
                }
                res = temp;
                continue;
            }
            res += it;
        }
        return res;

    }
};