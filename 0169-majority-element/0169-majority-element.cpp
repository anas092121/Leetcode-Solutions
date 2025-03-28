class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int maxi=1;
        int actMax=1;
        int ans = nums[0];
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                maxi++;
            }
            else{
                maxi=1;
            }
            if(maxi>actMax){
                actMax=maxi;
                ans=nums[i];
            }
        }
        return ans;
    }
};