class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int freq[26] = {0}, mp[26] = {0};

        for (char ch : target) mp[ch - 'a']++;  
        for (char ch : s) freq[ch - 'a']++;     

        int ans = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (mp[i] > 0) {  
                ans = min(ans, freq[i] / mp[i]);
            }
        }

        return ans;
    }
};
