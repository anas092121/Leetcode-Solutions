class Solution {
public:
    int pivotInteger(int n) {
        int left = 1;
        int right = n;
        int lsum = left;
        int rsum = right;
        while(left < right){
            if(lsum <= rsum){
                left++;
                lsum += left;
            }
            else{
                right--;
                rsum += right;
            }
        }
        if(lsum==rsum){
            return left;
        }
        else{
            return -1;
        }
    }
};