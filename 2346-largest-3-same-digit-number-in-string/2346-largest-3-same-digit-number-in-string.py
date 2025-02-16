class Solution:
    def largestGoodInteger(self, num: str) -> str:
        ans = -1
        for i in range(1, len(num)-1):
            if(num[i] == num[i-1] == num[i+1]):
                ans = max(ans, int(num[i]))
        if(ans == -1) : return ""
        return str(ans)*3