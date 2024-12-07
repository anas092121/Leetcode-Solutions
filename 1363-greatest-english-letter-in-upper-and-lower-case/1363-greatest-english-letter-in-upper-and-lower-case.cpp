class Solution {
public:
    string greatestLetter(string s) {
        map <char,int> count;
        for(int i=0; i<s.size(); i++){
            count[s[i]]++;
        }

        string maxi = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]>=65 && s[i]<=90){
                if(count[s[i]+32]){
                    maxi += s[i];
                }
            }
        }
        if(maxi == ""){
            return "";
        }
        // return maxi;
        char ans = maxi[0];
        for(int i=1; i<maxi.size(); i++){
            if(ans < maxi[i]){
                ans = maxi[i];
            }
        }
        
        string val = "";
        val = val + ans;

        return val;


    }
};