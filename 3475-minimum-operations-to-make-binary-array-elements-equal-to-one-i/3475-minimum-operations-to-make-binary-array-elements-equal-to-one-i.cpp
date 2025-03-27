// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
//         deque<int> flipQ;
//         int count = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             while (!flipQ.empty() && i > flipQ.front() + 2) {
//                 flipQ.pop_front();
//             }

//             if ((nums[i] + flipQ.size()) % 2 == 0) {
//                 if (i + 2 >= nums.size()) {
//                     return -1;
//                 }
//                 count++;
//                 flipQ.push_back(i);
//             }
//         }

//         return count;
//     }
// };




class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i=2; i<nums.size(); i++){
            if(nums[i-2] == 0){
                nums[i-2] = 1;
                nums[i-1] ^= 1;
                nums[i] ^= 1;

                count++;
            }
        }

        int sum = 0;
        for(auto it : nums){
            sum += it;
        }

        return sum==nums.size() ? count : -1;
    }
};