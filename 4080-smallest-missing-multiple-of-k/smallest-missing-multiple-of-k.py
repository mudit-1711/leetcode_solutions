class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        s = set(nums)         
        a = []
        m = k
        mx = max(nums)
        while m <= mx:
            a.append(m)
            m += k
        a.append(m)
        for i in range(len(a)):
            if a[i] in s:    
                continue
            else:
                return a[i]