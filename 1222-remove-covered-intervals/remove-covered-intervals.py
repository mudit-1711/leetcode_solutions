class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        cov = 0
        n = len(intervals)
        for i in range(n):
            for j in range(n):
                if i == j:
                    continue
                if (intervals[i][0] >= intervals[j][0] and
                    intervals[i][1] <= intervals[j][1]):
                    cov += 1
                    break
        return n - cov