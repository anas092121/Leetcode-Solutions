class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> count;
        for(int i=0; i<s.size(); i++){
            if(count[s[i]]){
                return s[i];
            }
            count[s[i]]++;
        }
        return 'n';
    }
};