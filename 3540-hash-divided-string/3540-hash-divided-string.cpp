class Solution {
public:
    string stringHash(string s, int k) {
        string res = "";
        int n = s.size();
        for(int i = 0; i < n; i += k) {
            int sum = 0;
            for(int j = i; j <(i+k); j++) { 
                sum += (s[j] - 'a');
            }
            res += static_cast<char>('a' + (sum % 26));
        }
        return res;
    }
};
