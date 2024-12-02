class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        if(sentence.size()<searchWord.size()){
            return -1;
        }
        int count=1;
        bool temp = true;
        for(int i=0; i<searchWord.size(); i++){
            if(searchWord[i] != sentence[i]){
                temp = false;
                break;
            }
        }
        if(temp)    return 1;
        for(int i=0; i<sentence.size()-searchWord.size(); i++){
            if(sentence[i] == ' '){
                count++;
                int k = i+1;
                bool flag = true;
                for(int j=0; j<searchWord.size(); j++){
                    if(sentence[k] != searchWord[j]){
                        flag = false;
                        break;
                    }
                    k++;
                }
                if(flag){
                    return count;
                }
            }
        }
        return -1;
    }
};