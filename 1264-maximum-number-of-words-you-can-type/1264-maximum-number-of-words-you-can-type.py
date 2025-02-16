class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        li = text.split()
        ans = 0 
        for word in li:
            flag = True
            for ch in word:
                if (ch in brokenLetters):
                    flag = False
                    break
            if(flag):
                ans += 1

        return ans
