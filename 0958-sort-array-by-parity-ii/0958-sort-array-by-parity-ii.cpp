class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for(auto it : nums){
            if(it%2 == 0){
                even.push_back(it);
            }
            else{
                odd.push_back(it);
            }
        }
        
        int od=0;
        int ev=0;
        bool flag = true;
        for(int i=0; i<nums.size(); i++){
            if(flag){
                nums[i] = even[ev++];
            }
            else{
                nums[i] = odd[od++];
            }
            flag = !flag;
        }
        return nums;
    }
};