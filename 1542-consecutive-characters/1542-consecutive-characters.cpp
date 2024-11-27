class Solution {
public:
    int maxPower(string s) {
        int count;
        count = 1;
        int ans = count;
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};