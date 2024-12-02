class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for(int i=0; i<nums.size(); i++){
            if(i%2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        
        int od=odd.size()-1;
        int ev=0;
        bool flag = true;
        for(int i=0; i<nums.size(); i++){
            if(flag){
                nums[i] = even[ev++];
            }
            else{
                nums[i] = odd[od--];
            }
            flag = !flag;
        }
        return nums;
    }
};