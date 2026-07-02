class Solution:
    def countOppositeParity(self, nums: list[int]) -> list[int]:
        ans =[]
        for i in range(len(nums)):
            score = 0
            for j in range(i,len(nums)):
                if((nums[i]%2==0 and nums[j]%2==1)or(nums[i]%2==1 and nums[j]%2==0)):
                    score+=1
            ans.append(score)
        return  ans          