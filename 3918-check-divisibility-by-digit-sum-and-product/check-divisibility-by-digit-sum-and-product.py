class Solution:
    def checkDivisibility(self, n: int) -> bool:
        pro=1
        sum=0
        u=n
        while n>0 :
            pro*=(n%10)
            sum+=(n%10)
            n=n//10
        return u%(sum+pro)==0    