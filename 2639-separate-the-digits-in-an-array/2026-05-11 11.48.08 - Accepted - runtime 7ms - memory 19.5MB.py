class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans=[]
        for i in range(len(nums)):
            num = nums[i]
            temp=[]
            while(num>0):
                temp.append(num%10)
                num=num//10
            temp.reverse() 
            for j in range(len(temp)):
                ans.append(temp[j])   
        return ans        