class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool flag = true;
        int count = 0;
        int idx = 0;

        while (flag) {
            flag = false;
            map<int,int> mp;
            for (int i = idx; i < nums.size(); i++) {
                mp[nums[i]]++;
                if(mp[nums[i]] >= 2){
                    flag = true;
                    idx += 3;
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};