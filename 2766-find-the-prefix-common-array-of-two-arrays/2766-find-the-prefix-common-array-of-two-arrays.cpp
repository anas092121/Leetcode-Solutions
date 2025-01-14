class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        map<int,int> count;
        int n = A.size();
        for(int i=0; i<n; i++){
            count[A[i]]++;
            count[B[i]]++;
            
            int res = 0;
            for(auto it : count){
                if(it.second>1){
                    res++;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};