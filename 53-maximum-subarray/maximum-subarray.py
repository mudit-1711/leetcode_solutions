class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        curr=nums[0]
        mx=nums[0]
        for i in range(1,len(nums)):
            curr=max(curr+nums[i],nums[i])
            mx=max(mx,curr)
        return mx    