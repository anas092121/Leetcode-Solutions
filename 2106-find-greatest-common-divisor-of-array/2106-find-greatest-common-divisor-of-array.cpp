#include<cmath>
class Solution {
public:
    int gcd(int a, int b){
        if(a==0){
            return b;
        }
        else if(b==0){
            return a;
        }
        else{
            if(a>b)
                return gcd(a%b , b);
            else
                return gcd(a, b%a);    
        }
    }

    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(auto it : nums){
            maxi = max(it, maxi);
            mini = min(it, mini);
        }
        return gcd(mini,maxi);
    }
};