class Solution {
public:
    int longestString(int x, int y, int z) {
        int mini = min(x,y);
        return x == y ? 4*x+z*2 : 2*mini + (mini+1)*2 + z*2;
    }
};