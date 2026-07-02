class Solution:
    def is_sorted(self,lst):
        return lst == sorted(lst)
    def rot(self,nums: List[int])->None:
        d = nums[0]
        nums.pop(0)
        nums.append(d)
    def check(self, nums: List[int]) -> bool:
        n=len(nums)
        while(n>0):
            if self.is_sorted(nums):
                return True
            self.rot(nums)
            n-=1
        return False    