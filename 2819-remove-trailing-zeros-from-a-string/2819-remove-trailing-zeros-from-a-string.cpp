class Solution {
public:
    string removeTrailingZeros(string num) {
        int size = num.size();
        while (size > 0 && num[size - 1] == '0') {
            size--;
        }
        return num.substr(0, size);
    }
};
