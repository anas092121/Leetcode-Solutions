class Solution {
public:
    bool canPartition(string& numStr, int index, int sum, int target) {
        if (index == numStr.size())
            return sum == target; 

        int currentNum = 0;
        for (int i = index; i < numStr.size(); i++) {
            currentNum = currentNum * 10 + (numStr[i] - '0'); 
            if (sum + currentNum > target)
                break; 
            if (canPartition(numStr, i + 1, sum + currentNum, target))
                return true;
        }
        return false;
    }

    // Wrapper function
    bool punishment(int i) {
        string numStr = to_string(i * i);
        return canPartition(numStr, 0, 0, i);
    }

    int punishmentNumber(int n) {
        int sum = 0;
        for (int i = 0; i <= n; i++) {
            if (punishment(i)) {
                sum += i * i;
            }
        }
        return sum;
    }
};