class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans;
        if(numOnes >= k){
            return k;
        }
        else if((numOnes+numZeros) >= k){
            return numOnes;
        }
        else{
            return (numOnes-(k-(numOnes+numZeros)));
        }
    }
};