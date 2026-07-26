class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        mx1 = mx2 = mx3 = -1001
        mn1 = mn2 = 1001
        for num in nums:
            if num >= mx1:
                mx3 = mx2
                mx2 = mx1
                mx1 = num
            elif num >= mx2:
                mx3 = mx2
                mx2 = num
            elif num > mx3:
                mx3 = num
            if num <= mn1:
                mn2 = mn1
                mn1 = num
            elif num < mn2:
                mn2 = num
        return max(mx1 * mx2 * mx3, mx1 * mn1 * mn2)