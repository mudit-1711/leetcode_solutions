class Solution:
    def evenNumberBitwiseORs(self, nums: List[int]) -> int:
        ans=0
        for i in range(len(nums)):
            if nums[i]%2==0:
                ans=ans|nums[i]
        return ans        