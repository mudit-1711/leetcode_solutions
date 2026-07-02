class Solution:
    def alternateDigitSum(self, n: int) -> int:
        s=str(n)
        sum=0
        sign=1
        for i in s :
            sum+=sign*(int(i))
            sign*=-1
        return sum    