class Solution {
  public:
    int repeatedStringMatch(string A, string B) {
        int q = 1;
        string S = A;

        while (S.length() < B.length()) {
            S += A;
            q++;
        }

        if (S.find(B) != string::npos) return q;
        S += A;
        if (S.find(B) != string::npos) return q + 1;

        return -1;
    }
};
