class Solution:
    def orderlyQueue(self, s: str, k: int) -> str:
        if k > 1:
            return "".join(sorted(s))
        res = s
        for i in range(0, len(s)):
            s = s[1:len(s)] + s[0]
            res = min(res, s)
        return res
