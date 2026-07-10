class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        mx=max(nums)
        mn = min(nums)
        for i in range(len(nums)):
            if nums[i]!=mx and nums[i]!=mn:
                return nums[i]
        return -1        