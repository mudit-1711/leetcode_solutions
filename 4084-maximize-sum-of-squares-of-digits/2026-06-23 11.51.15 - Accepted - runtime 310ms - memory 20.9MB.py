class Solution:
    def maxSumOfSquares(self, num: int, sum: int) -> str:
        ans = ""
        if sum > 9 * num:
            return ans
        maxnine = 0
        temp1 = sum
        temp2 = num
        while temp1 > 9:
            maxnine += 1
            temp2 -= 1
            temp1 -= 9
        remsum = temp1
        remnum = temp2
        ans += "9" * maxnine
        if remsum > 0:
            ans += str(remsum)
            remnum -= 1

        ans += "0" * remnum

        return ans
