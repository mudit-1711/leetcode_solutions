class Solution:
    def occurrencesOfElement(self, nums: List[int], queries: List[int], x: int) -> List[int]:
        t=[]
        for i in range(len(nums)):
            if nums[i]==x :
                t.append(i)
        ans =[]
        for i in queries:
            if i>len(t):
                ans.append(-1)
            else:
                ans.append(t[i-1])
        return ans                     