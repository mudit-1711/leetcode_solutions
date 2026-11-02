class Solution:
    def minMoves2(self, nums: list[int]) -> int:
        ans=0
        nums.sort()
        mid=nums[(len(nums)//2)]
        for n in nums:
            ans+=abs(mid-n)
        return ans