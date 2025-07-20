class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int maxi = num, mini = num;

        for (char d1 = '0'; d1 <= '9'; d1++) {
            for (char d2 = '0'; d2 <= '9'; d2++) {
                string temp = s;
                for (char &c : temp) {
                    if (c == d1) c = d2;
                }
                int val = stoi(temp);
                maxi = max(maxi, val);
                mini = min(mini, val);
            }
        }
        return maxi - mini;
    }
};
