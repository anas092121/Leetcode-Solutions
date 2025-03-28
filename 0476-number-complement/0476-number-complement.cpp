class Solution {
public:
    int findComplement(int num) {
        if (num == 0)
            return 1;
        int x = 0;
        int arr[100];
        int i = 0;
        while (num != 0) {
            arr[i] = num % 2;
            num /= 2;
            i++;
        }
        int index = i;
        while (i--) {
            if (arr[i] == 1)
                arr[i] = 0;
            else
                arr[i] = 1;
        }
        i = 0;
        while (i < index) {
            x = x + pow(2, i) * arr[i];
            i++;
        }

        return x;
    }
};