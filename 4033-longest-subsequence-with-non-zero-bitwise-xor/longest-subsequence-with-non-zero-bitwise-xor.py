class Solution:
    def longestSubsequence(self, nums: List[int]) -> int:
        nonzero = False
        x=0
        for num in nums:
            if num != 0:
                nonzero=True
            x^=num
        if(x!=0):
            return len(nums)
        if(nonzero):
            return len(nums)-1
        return 0        