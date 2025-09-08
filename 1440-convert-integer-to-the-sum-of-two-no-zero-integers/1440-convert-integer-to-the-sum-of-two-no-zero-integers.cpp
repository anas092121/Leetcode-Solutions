class Solution {
public:
    bool hasZero(int n) {
        if (n == 0) return true;
        while (n > 0) {
            if (n % 10 == 0) return true;
            n /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        
        for(int i=1; i<n; i++){
            if(hasZero(i) || hasZero(n-i)) continue;
            ans.push_back(i);
            ans.push_back(n-i);
            return ans;
        }

        return ans;
    }
};