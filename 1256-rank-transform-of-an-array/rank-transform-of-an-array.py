class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        temp = sorted(arr)
        rank = {}
        r = 1
        for num in temp:
            if num not in rank:
                rank[num] = r
                r += 1
        for i in range(len(arr)):
            arr[i] = rank[arr[i]]
        return arr