class Solution:
    def reverseDegree(self, s: str) -> int:
        ans=0
        for i in range(len(s)):
            ans += (27 - (ord(s[i]) - ord('a') + 1)) * (i + 1)
        return ans    