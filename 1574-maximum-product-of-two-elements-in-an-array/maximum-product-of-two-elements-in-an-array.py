class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        mx1=mx2=-1
        for num in nums:
            if num>mx1:
                mx2=mx1
                mx1=num
            elif num>mx2:
                mx2=num
        return (mx1-1)*(mx2-1)            
                