class Solution:
    def decimalRepresentation(self, n: int) -> List[int]:
        ans=[]
        p=1
        while n>0:
            if(n%10==0):
                p*=10
                n=n//10
                continue
            else:    
                ans.append(p*(n%10))
            n=n//10
            p=p*10
        return ans[::-1]