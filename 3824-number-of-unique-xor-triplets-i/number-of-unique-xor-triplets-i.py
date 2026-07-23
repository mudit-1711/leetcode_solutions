class Solution:
    def uniqueXorTriplets(self, nums: List[int]) -> int:
        n=len(nums)
        if n<=2:
            return n
        ans=nums[0]
        for i in range(1,n):
            ans|=nums[i]    
        return ans+1    