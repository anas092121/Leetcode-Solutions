class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size() <= 1)   return nums.size(); 
       sort(nums.begin(),nums.end());
    //    unordered_set<int> s;
       int ans = 1;
       int slot = 1;
       for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1])  continue;
            if(nums[i] == (nums[i-1]+1)){
                slot++;
            }
            else{
                slot = 1;
            }
            ans = max(ans, slot);
       }
       return ans;
    }
};