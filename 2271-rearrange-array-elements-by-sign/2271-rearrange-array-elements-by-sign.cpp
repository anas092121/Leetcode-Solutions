class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> P;
        vector<int> N;
        for(auto it : nums){
            if(it>0){
                P.push_back(it);
            }else{
                N.push_back(it);
            }
        }

        nums.clear();
        for(int i=0; i< P.size(); i++){
            nums.push_back(P[i]);
            nums.push_back(N[i]);
        }
        return nums;
    }
};