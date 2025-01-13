class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;

        // Calculate the total sum of the array
        for (int num : arr) {
            sum += num;
        }

        // If the sum is not divisible by 3, return false
        if (sum % 3 != 0) {
            return false;
        }

        int target = sum / 3;
        int parts = 0, currentSum = 0;

        // Iterate through the array to find partitions
        for (int num : arr) {
            currentSum += num;

            if (currentSum == target) {
                parts++;
                currentSum = 0;
            }

            // If we find 3 parts, return true
            if (parts == 3) {
                return true;
            }
        }

        // If less than 3 parts are found, return false
        return false;
    }
};
