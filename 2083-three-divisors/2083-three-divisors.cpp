class Solution {
public:
    bool isThree(int n) {
        int c = 2;
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                c++;
            }
        }
        
        return c==3;
    }
};