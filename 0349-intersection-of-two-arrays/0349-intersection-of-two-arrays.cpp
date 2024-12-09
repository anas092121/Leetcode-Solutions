class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        for(auto it : nums2){
            if(it == nums1[0]){
                ans.push_back(it);
                break;
            }
        }
        for(int i=1; i<nums1.size(); i++){
            if(nums1[i] == nums1[i-1]){
                continue;
            }
            int val  = nums1[i];
            for(int j=0; j<nums2.size(); j++){
                if(nums2[j] == val){
                    ans.push_back(val);
                    break;
                }
            }
        }
        return ans;
    }
};