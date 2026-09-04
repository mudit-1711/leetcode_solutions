class Solution(object):
    def firstStableIndex(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        n=len(nums)
        mn=n*[0]
        mx=n*[0]
        mx[0]=nums[0]
        for i in range(1,n):
            mx[i]=max(mx[i-1],nums[i])
        mn[n-1]=nums[n-1]
        for i in range(n-2,-1,-1):
            mn[i]=min(nums[i],mn[i+1])
        for i in range(n):
            if mx[i]-mn[i] <=k :
                return i
        return -1
        