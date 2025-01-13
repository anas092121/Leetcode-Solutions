class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        if (sum % 3 != 0) {
            return false;
        }
        int target = sum / 3;
        int parts = 0, currentSum = 0;

        for (int num : arr) {
            currentSum += num;

            if (currentSum == target) {
                parts++;
                currentSum = 0;
            }

            if (parts == 3) {
                return true;
            }
        }
        return false;
    }
};
