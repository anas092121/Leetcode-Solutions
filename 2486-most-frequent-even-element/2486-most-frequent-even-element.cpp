class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        int ans = -1;
        int max = 0;
        for(auto it : mp){
            if(it.first % 2 == 0  &&  max < it.second){
                ans = it.first;
                max = it.second;
            }
        }
        return ans;
    }
};