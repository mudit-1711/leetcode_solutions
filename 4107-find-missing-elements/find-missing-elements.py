class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        mx = max(nums)
        mn = min(nums)
        ans=[]
        for i in range(mn,mx):
            if i in nums :
                continue
            else:
                ans.append(i)    
        return ans        