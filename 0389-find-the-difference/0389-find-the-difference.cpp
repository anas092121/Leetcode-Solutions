class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        int temp = 0;
        for(auto it : s)    sum += it;
        for(auto it : t)    temp += it;
        return abs(sum-temp);
    }
};