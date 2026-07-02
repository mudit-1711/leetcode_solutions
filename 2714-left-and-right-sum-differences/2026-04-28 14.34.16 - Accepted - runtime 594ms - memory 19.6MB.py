class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        lsum=[]
        rsum=[]
        ans=[]
        for i in range(len(nums)):
            suml =0
            sumr=0
            for j in range(0,i):
                suml+=nums[j]
            lsum.append(suml)    
            for j in range(i+1,len(nums)):
                sumr+=nums[j]
            rsum.append(sumr)  
        for i in range(len(nums)):
            ans.append(abs(lsum[i]-rsum[i]))
        return ans      