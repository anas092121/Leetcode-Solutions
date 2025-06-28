class Solution {
public:

    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans ;

        vector<pair<int,int>> arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back({i,nums[i]});
        }

        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        sort(arr.begin(), (arr.begin()+k));

        for(int i=0; i<k; i++){
            ans.push_back(arr[i].second);
        }

        return ans;




    }
};