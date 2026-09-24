class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            num = nums[i]
            sum=0
            while(num>0):
                sum+=num%10
                num=num//10
            if sum==i:
                return i
        return -1            