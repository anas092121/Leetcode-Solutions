class Solution {
public:
    void make_valid(string& str) {
        str.insert(str.begin(), 4 - str.size(), '0');
    }

    int generateKey(int num1, int num2, int num3) {
        string ans = "";
        string a = to_string(num1);
        string b = to_string(num2);
        string c = to_string(num3);

        make_valid(a);
        make_valid(b);
        make_valid(c);

        for (int i = 0; i < 4; i++) {
            ans += to_string(min({a[i] - '0', b[i] - '0', c[i] - '0'}));
        }
        return stoi(ans);
    }
};