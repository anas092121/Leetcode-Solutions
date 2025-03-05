class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 0;
        long long curr = 1;
        for(int i = 1; i<n ; i++){
            ans += curr;
            curr += 2;
        }
        return ans*2 + curr;
    }
};