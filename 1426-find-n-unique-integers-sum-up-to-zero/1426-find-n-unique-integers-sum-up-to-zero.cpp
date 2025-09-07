class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        bool flag = (n%2 == 0);
        for(int i=-(n/2); i<= (n/2); i++){
            if(flag && i==0)    continue;
            ans.push_back(i);
        }
        return ans;
    }
};