class Solution:
    def maximizeSum(self, nums: List[int], k: int) -> int:
        ans=0
        nums.sort()
        nums.reverse()
        while k>0:
            ans+=nums[0]
            nums[0]+=1
            k-=1
        return ans    