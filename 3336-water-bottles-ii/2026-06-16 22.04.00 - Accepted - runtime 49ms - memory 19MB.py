class Solution:
    def maxBottlesDrunk(self, numB: int, numE: int) -> int:
        ans=0
        curr = numB
        e=0
        while curr>0 or e>=numE:
            while curr>0 :
                curr-=1
                ans+=1
                e+=1
            if e>=numE:
                e-=numE
                curr+=1
                numE+=1
        return ans            