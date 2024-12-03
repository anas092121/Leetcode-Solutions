// ASCII     >>>--------{>     (97 - 122)
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[123] = {0};
        for(int i=0; i<sentence.size(); i++){
            arr[sentence[i]]++;
        }
        for(int i=97; i<123; i++){
            if(arr[i]==0){
                return false;
            }
        }
        return true;
    }
};