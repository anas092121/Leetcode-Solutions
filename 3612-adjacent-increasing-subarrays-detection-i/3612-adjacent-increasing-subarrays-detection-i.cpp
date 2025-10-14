class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        // int 

        for(int i=0; i<=nums.size()-2*k; i++){
            bool fst = true;
            bool scd = true;
            for(int j=i+1; j<i+k; j++){
                if(nums[j-1]<nums[j]){
                    continue;
                }
                else{
                    fst = false;
                }
            }
            for(int j=i+k+1; j<i+2*k; j++){
                if(nums[j-1]<nums[j]){
                    continue;
                }
                else{
                    scd = false;
                }
            }
                
            if(fst && scd)
                return true;
        }
        return false;
    }
};