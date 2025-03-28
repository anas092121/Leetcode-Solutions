class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans = 0;
        unordered_map<int,int> mp1;             
        unordered_map<int,int> mp2;

        // nums1 + nums2
        for(auto it1 : nums1)             
            for(auto it2 : nums2)
                mp1[it1 + it2]++;           

        // nums3 + nums4
        for(auto it1 : nums3)             
            for(auto it2 : nums4)
                mp2[it1 + it2]++;     

        for(auto it : mp1){
            int x = -it.first;
            if(mp2.find(x) != mp2.end()){
                ans = ans + it.second * mp2[x];  
            }
        }             

        return ans;   
    }
};
