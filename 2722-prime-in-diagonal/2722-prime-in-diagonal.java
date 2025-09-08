class Solution {
    public static boolean isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }


    public int diagonalPrime(int[][] nums) {
        int ans = 0;
        for(int i=0; i<nums.length; i++){
            int num = nums[i][i];
            if(isPrime(num))    ans = Math.max(ans , num);

            num = nums[i][nums.length - i - 1];
            if(isPrime(num))    ans = Math.max(ans , num);
        }  
        return ans;
    }
}