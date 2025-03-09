class Solution {
public:
    int sumOfDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digSum = 0;
        for(int it : nums){
            sum += it;
            digSum += sumOfDigits(it);
        }
        return abs(sum-digSum);
    }
};