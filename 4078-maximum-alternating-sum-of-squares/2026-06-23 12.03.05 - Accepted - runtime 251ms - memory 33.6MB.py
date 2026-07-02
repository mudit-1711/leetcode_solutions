class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        n=len(nums)
        for i in range(len(nums)):
            nums[i]=abs(nums[i])
        nums.sort()
        arr1=[]
        arr2=[]
        for i in range(0,n//2):
            arr1.append(nums[i])
        for i in range(n//2,n):
            arr2.append(nums[i])
        psum=0
        nsum=0
        for i in range(len(arr1)):
            psum+=arr1[i]**2  
        for i in range(len(arr2)):
            nsum+=arr2[i]**2
        return nsum-psum;    



