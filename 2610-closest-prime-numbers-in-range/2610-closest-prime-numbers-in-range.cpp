class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        vector<int> ans(2,-1);
        for (int i = left; i <= right; i++) {
            if(isPrime(i))  primes.push_back(i);
        }
        int minDiff = INT_MAX;
        for(int i=1; i<primes.size(); i++){
            if((primes[i]-primes[i-1]) < minDiff){
                ans[0] = primes[i-1];
                ans[1] = primes[i];
                minDiff = primes[i]-primes[i-1];
            }
        }
        return ans;
    }
};