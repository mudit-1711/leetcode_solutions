class Solution:
    def rotateElements(self, nums: List[int], k: int) -> List[int]:
        idx = set()
        pos = []
        for i in range(len(nums)):
            if nums[i] >= 0:
                pos.append(nums[i])
                idx.add(i)
        if len(pos) == 0:
            return nums
        if len(pos) > 0:
            k = k % len(pos)
        pos = pos[k:] + pos[:k]
        j = 0
        for i in range(len(nums)):
            if i in idx:
                nums[i] = pos[j]
                j += 1
        return nums
