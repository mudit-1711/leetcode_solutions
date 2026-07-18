class Solution:
    def subarrayGCD(self, nums: List[int], k: int) -> int:
        ans = 0
        for i in range(len(nums)):
            gd = nums[i]
            if gd == k:
                ans += 1
            for j in range(i + 1, len(nums)):
                gd = gcd(nums[j], gd)
                if gd == k:
                    ans += 1
        return ans
