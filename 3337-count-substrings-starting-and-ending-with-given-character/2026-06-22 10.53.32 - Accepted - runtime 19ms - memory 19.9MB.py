class Solution:
    def countSubstrings(self, s: str, c: str) -> int:
        m=0
        for i in range(len(s)):
            if s[i]==c:
                m+=1
        return m*(m+1)//2        