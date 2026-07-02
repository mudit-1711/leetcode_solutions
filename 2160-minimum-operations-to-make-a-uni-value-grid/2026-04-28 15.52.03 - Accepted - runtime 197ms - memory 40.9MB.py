class Solution:
    def minOperations(self, grid: List[List[int]], x: int) -> int:
        v = []
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                v.append(grid[i][j])
        v.sort()
        ans =0
        base = v[0]
        for i in v:
            if abs(i - base) % x != 0:
                return -1
        med = v[len(v)//2]
        for i in v:
            ans+=abs(i-med)//x

        return ans