class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle = time / (n - 1);
        int pos = time % (n - 1);

        if (cycle % 2 == 0) {
            return 1 + pos;
        } 
        return n - pos;
    }
};
