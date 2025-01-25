class Solution {
public:
    int totalMoney(int n) {
        int fullWeeks = n / 7;
        int remainingDays = n % 7;
        
        // Total money from full weeks
        int ans = fullWeeks * 28 + (fullWeeks * (fullWeeks - 1) / 2) * 7;
        
        // Total money from remaining days
        int startValue = fullWeeks + 1;
        for (int i = 0; i < remainingDays; i++) {
            ans += startValue++;
        }
        
        return ans;
    }
};
