#include <iostream>
#include <unordered_map>
#include <string>

class Solution {
public:
    int balancedString(std::string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        int flag = s.size() / 4, left = 0, minLen = s.size();

        if (freq['Q'] == flag && freq['W'] == flag && freq['E'] == flag && freq['R'] == flag)
            return 0;

        for (int right = 0; right < s.size(); ++right) {
            freq[s[right]]--;

            while (freq['Q'] <= flag && freq['W'] <= flag && freq['E'] <= flag && freq['R'] <= flag) {
                minLen = std::min(minLen, right - left + 1);
                freq[s[left]]++;
                left++;
            }
        }
        return minLen;
    }
};