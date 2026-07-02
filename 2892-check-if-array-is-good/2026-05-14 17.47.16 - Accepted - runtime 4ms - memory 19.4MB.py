class Solution:
    def isGood(self, nums: List[int]) -> bool:
        nums.sort()
        n = len(nums)
        m = max(nums)
        if m != n - 1:
            return False
        for i in range(n):
            if i==n-2 or i==n-1:
                if nums[i]!=m :
                    return False
            else:
                if((i+1)!=nums[i]):
                    return False        
        return True         