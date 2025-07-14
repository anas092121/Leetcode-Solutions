class Solution {
public:
    vector<int> numberToDigits(int num) {
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }

    int splitNum(int num) {
        vector<int> vt = numberToDigits(num);
        sort(vt.begin(), vt.end());

        int num1 = 0;
        int num2 = 0;
        bool flag = true;
        for(auto it: vt){
            if(flag)    num1 = num1*10 + it;
            else        num2 = num2*10 + it;
            flag = !flag;
        }

        return num1+num2;
    }
};