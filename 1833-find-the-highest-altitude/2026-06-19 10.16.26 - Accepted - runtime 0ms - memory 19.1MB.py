class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ans=0
        temp=0
        for i in range(len(gain)):
            temp+=gain[i]
            ans=max(ans,temp)
        return ans    