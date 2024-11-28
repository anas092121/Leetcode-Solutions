class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        if(x==1){
            return 1;
        }
        double ans = 1;
        if(n>=0){
            while(n--){
                ans *= x;
            }
        }
        else{
            n = -n;
            while(n--){
                ans *= x;
            }
            ans = 1.0/ans;
        }
        return ans;
    }
};