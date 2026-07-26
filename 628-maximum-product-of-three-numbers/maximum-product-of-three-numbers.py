class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
         nums.sort()
         n=len(nums)
         if nums[0]<0 and nums[1]<0:
            if nums[0]*nums[1]*nums[n-1]>nums[n-1]*nums[n-2]*nums[n-3]:
                return nums[0]*nums[1]*nums[n-1]
            else:
                return nums[n-1]*nums[n-2]*nums[n-3]
         else:
            return nums[n-1]*nums[n-2]*nums[n-3]
