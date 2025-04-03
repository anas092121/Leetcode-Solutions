class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;
        long long maxDiff = 0;
        long long maxNum = 0;

        for(long long it: nums){
            ans = max(ans, maxDiff*it);
            maxDiff = max(maxDiff,maxNum-it);
            maxNum = max(maxNum, it);
        }
        
        return ans;
    }
};