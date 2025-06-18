class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){
            vector<int> temp;
            for(int j=i; j<(i+3); j++){
                temp.push_back(nums[j]);
            }
            ans.push_back(temp);
            if((temp[2] - temp[0]) > k){
                vector<vector<int>> flag;
                return flag;
            }
            i += 2;
        }
        return ans;
    }
};