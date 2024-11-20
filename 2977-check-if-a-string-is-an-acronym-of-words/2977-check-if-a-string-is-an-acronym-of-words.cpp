class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(s.size()!=words.size()){
            return false;
        }
        int k=0;

        for(int i=0; i<words.size() ;i++){
            if(s[i] != words[i][0]){
                return false;
            }
        }
        

        return true;
    }
};