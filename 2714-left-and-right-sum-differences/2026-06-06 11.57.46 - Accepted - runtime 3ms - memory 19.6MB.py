class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        n=len(nums)
        lsum=n*[0]
        rsum=n*[0]
        ans=[]
        for i in range(1,n):
            lsum[i]=lsum[i-1]+nums[i-1]  
        for i in range(len(nums)-2,-1,-1):
            rsum[i]=rsum[i+1]+nums[i+1]  
        for i in range(len(nums)):
            ans.append(abs(lsum[i]-rsum[i]))      
        return ans    
