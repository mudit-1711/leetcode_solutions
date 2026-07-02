class Solution:
    def sumBase(self, n: int, k: int) -> int:
        num=""
        ans=0
        while n>0 :
            t = n%k
            num+=str(t)
            n=n//k
        n=int(num)    
        while n>0 :
            ans+=n%10
            n=n//10
        return ans

