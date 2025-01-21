class Solution {
public:
    int hammingWeight(int n) {
        if(n==1)    return 1;
        int count = 0;
        while(n){
            count += n%2;
            n /= 2;
            if(n==1){
                break;
            }
        }
        return ++count;
    }
};