class Solution:
    def maxDistinct(self, s: str) -> int:
        freq=26*[0]
        for c in s :
            freq[ord(c)-ord('a')]+=1
        ans=0
        for i in freq:
            if i>0:
                ans+=1
        return ans            