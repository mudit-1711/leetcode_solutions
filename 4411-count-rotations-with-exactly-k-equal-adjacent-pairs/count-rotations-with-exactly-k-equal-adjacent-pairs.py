class Solution:
    def countRotations(self, s: str, k: int) -> int:
        ans=0
        n=len(s)
        for i in range(n):
            v = s[i:]+s[:i]
            b=0
            for x in range(len(v)-1):
                if v[x]==v[x+1]:
                    b+=1
            if b==k:
                ans+=1
        return ans            