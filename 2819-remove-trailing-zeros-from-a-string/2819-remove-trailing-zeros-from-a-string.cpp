class Solution {
public:
    string removeTrailingZeros(string num) {
        int size = num.size();
        for(int i=num.size()-1; i>=0; i--){
            if(num[i]=='0'){
                size--;
            }
            else{
                break;
            }
        }

        string res = "";
        for(int i=0; i<size; i++){
            res += num[i];
        }

        return res;
    }
};