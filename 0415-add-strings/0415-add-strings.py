# NOTE: numbers given in string re too large so we cannot convert them directly into strings so we have to use a array or list to stort numbers in given in the form of strin char by char

class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        num1_list = [char for char in num1]
        num2_list = [char for char in num2] 

        carry = 0
        result = []
        i, j = len(num1) - 1, len(num2) - 1

        while i >= 0 or j >= 0 or carry:
            digit1 = int(num1[i]) if i >= 0 else 0
            digit2 = int(num2[j]) if j >= 0 else 0

            total = digit1 + digit2 + carry
            result.append(str(total % 10))
            carry = total // 10

            i -= 1
            j -= 1

        return ''.join(result[::-1])
