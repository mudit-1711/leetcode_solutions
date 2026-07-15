class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        even = n*(4+(n-1)*2)//2
        odd = n*(2+(n-1)*2)//2
        return math.gcd(even,odd)