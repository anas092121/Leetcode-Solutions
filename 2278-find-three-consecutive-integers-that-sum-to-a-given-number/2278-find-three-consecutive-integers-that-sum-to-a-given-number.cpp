class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long n = num/3;
        long long st = num/4;
        vector<long long> ans;

        if(num%3 == 0){
            ans.push_back((num/3)-1);
            ans.push_back((num/3));
            ans.push_back((num/3)+1);
        }
        return ans;



        for(long long i=st; i<=n; i++){
            if((3*i) == num){
                ans.push_back(i-1);
                ans.push_back(i);
                ans.push_back(i+1);
                break;
            }
        }
        return ans;
    }
};