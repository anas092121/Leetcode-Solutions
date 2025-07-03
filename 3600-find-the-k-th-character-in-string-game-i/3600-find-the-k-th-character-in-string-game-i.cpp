class Solution {
public:
    char kthCharacter(int k) {
        string word="a";

        while(word.size()<k){
            string res="";
            for(int i=0; i<word.size(); i++){
                char incrementedChar = word[i] + 1;
                res += incrementedChar;
            }
            word.append(res);
        }
        return word[k-1];

    }
};