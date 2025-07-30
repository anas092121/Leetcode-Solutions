class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }


        int count=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==max){
                count++;
            }
            else{
                count=0;
            }
            if(count>ans){
                ans=count;
            }
        }

        return ans;
    }
};