class Solution:
    def minMoves(self, nums: List[int]) -> int:
        minnum = min(nums)
        return sum(num - minnum for num in nums)
