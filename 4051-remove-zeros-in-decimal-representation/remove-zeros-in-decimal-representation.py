class Solution:
    def removeZeros(self, n: int) -> int:
        s=str(n)
        a=""
        for i in s:
            if i!='0':
                a+=i
        return int(a)        