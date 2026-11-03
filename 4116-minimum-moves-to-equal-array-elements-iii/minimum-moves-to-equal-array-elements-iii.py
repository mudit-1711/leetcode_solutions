class Solution:
    def minMoves(self, nums: List[int]) -> int:
        return sum(abs(x-max(nums)) for x in nums)