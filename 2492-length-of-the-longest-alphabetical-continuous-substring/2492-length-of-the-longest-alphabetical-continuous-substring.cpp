class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1;
        int count = 1;
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]+1){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};