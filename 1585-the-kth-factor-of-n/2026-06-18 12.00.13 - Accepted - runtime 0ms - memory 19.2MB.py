class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        a=0
        f=0
        for i in range(1,n+1):
            if(n%i==0):
                f=i
                a+=1
            if(a==k):
                return f
        return -1            
