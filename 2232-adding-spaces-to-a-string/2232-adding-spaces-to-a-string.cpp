class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int k=0;
        for(int i=0; i<s.size(); i++){
            if(i==spaces[k]){
                res += " ";
                if(k<spaces.size()-1){
                    k++;
                }
            }
            res += s[i];
        }
        return res;
    }
};