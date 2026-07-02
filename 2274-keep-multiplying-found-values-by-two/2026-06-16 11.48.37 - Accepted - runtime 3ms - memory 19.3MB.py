class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        find = True
        while(find):
            if(original in nums):
                find = True
                original*=2
            else:
                break
        return original            
