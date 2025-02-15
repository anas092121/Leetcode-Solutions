class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        int pen = total / cost1;
        for (int i = 0; i <= pen; i++) {
            int t = total - (cost1 * i);
            int pencil = t / cost2;
            ans += pencil + 1;
        }
        return ans;
    }
};