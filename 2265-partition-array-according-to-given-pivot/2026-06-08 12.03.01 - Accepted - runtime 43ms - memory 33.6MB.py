class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        less=[]
        grea=[]
        eq=[]
        for i in range(len(nums)):
            if nums[i]<pivot:
                less.append(nums[i])
            elif nums[i]>pivot :
                grea.append(nums[i])
            else:
                eq.append(nums[i])        
        return less+eq+grea        