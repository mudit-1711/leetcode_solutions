class Solution:
    def minMergedInteger(self, nums: list[int]) -> int:
        ans=100000000
        i=0
        while i < len(nums)-1:
            num1=str(nums[i])
            num2=str(nums[i+1])
            ans=min(ans,int(num1+num2))
            i+=2
        return ans    